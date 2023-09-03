// SỐ THUẬN NGHỊCH LẺ

// Viết chương trình kiểm tra các số N thỏa mãn cả ba điều kiện:
//     - N là số thuận nghịch
//     - Tất cả các chữ số của N đều là số lẻ
//     - Tổng chữ số của N cũng là một số lẻ

// Input
// Dòng đầu ghi số bộ test
// Mỗi bộ test ghi số N không quá 18 chữ số
// Output
// Với mỗi bộ test, ghi ra YES hoặc NO trên một dòng.

// Ví dụ:
// Input:
// 2
// 131
// 3779
// Output:
// YES
// NO

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char s[]);
bool checkAllDigitsOdd(char s[]);
bool checkSumDigitOdd(char s[]);
bool check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[20] = "";
        scanf("%s", &s);
        (check(s)) ? printf("YES\n") : printf("NO\n");
    }
}

bool check(char s[]){
    return isPalindrome(s) && checkAllDigitsOdd(s) && checkSumDigitOdd(s);
}

bool isPalindrome(char s[]){
    for(int i = 0; i < strlen(s) / 2; i++){
        if(s[i] != s[strlen(s) - i - 1]){
            return false;
        }
    }
    return true;
}

bool checkAllDigitsOdd(char s[]){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] % 2 == 0){
            return false;
        }
    }
    return true;
}

bool checkSumDigitOdd(char s[]){
    int sum = 0;
    for(int i = 0; i < strlen(s); i++){
        sum += (s[i] - 48);
    }
    return sum % 2 == 1;
}