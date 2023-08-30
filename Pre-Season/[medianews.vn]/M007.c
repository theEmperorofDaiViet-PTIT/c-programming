// KIỂM TRA SỐ THUẬN NGHỊCH

// Số thuận nghịch là số thỏa mãn nếu đảo ngược lại vẫn là chính nó.
// Viết chương trình C cho phép nhập vào một số n và kiểm tra xem n có phải là số thuận nghịch hay không.
// Nếu đúng in ra số 1, ngược lại nếu sai in ra số 0.

// INPUT
// 1991
// OUTPUT
// 1

#include<stdio.h>
#include<string.h>

int isPalindrome(char s[]);

void main(){
    char s[1000];
    scanf("%s", &s);
    printf("%d", isPalindrome(s));
}

int isPalindrome(char s[]){
    for(int i = 0; i < strlen(s) / 2; i++){
        if(s[i] != s[strlen(s) - i - 1]){
            return 0;
        }
    }
    return 1;
}