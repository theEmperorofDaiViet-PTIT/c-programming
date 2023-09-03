// SỐ ĐẸP 3

// Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8.
// Viết chương trình liệt kê trong một đoạn giữa hai số nguyên [a,b] cho trước có bao nhiêu số đẹp như vậy

// Input:
// Chỉ có một dòng ghi hai số a, b.
// Output:
// Ghi ra kết quả tính toán trên một dòng

// Ví dụ:
// Input:
// 1 500
// Output:
// 161

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPalindrome(int n);
bool check(int n);

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int tmp = a;
    a = (a <= b) ? a : b;
    b = (tmp <= b) ? b : tmp;
    for(int i = a; i <= b; i++){
        if(check(i)){
            printf("%d ", i);
        }
    }
}

bool isPalindrome(int n){
    int length = 0;
    while(n / (int) pow(10, length) > 0){
        length++;
    }
    for(int i = 0, j = length - 1; i < length; i++, j--){
        if((n / (int) pow(10, i)) % 10 != (n / (int) pow(10, j)) % 10){
            return false;
        }
    }
    return true;
}

bool check(int n){
    bool containSix = false;
    int sum = 0;
    int tmp = n;
    while(n > 0){
        sum += (n % 10);
        if(n % 10 == 6){
            containSix = true;
        }
        n /= 10;
    }
    return isPalindrome(tmp) && (sum % 10 == 8) && containSix;
}