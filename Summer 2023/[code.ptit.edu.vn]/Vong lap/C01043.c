// SỐ STRONG

// Số Strong là số thỏa mãn có tổng giai thừa các chữ số của nó bằng chính nó. Ví dụ: 145 = 1! + 4! + 5!
// Viết chương trình nhập vào số n không quá 6 chữ số và kiểm tra xem n có phải số Strong hay không. Nếu đúng in ra 1 sai in ra 0.

// Input
// Chỉ có một dòng ghi số N (không quá 6 chữ số)
// Output
// Ghi ra 1 hoặc 0

// Ví dụ:
// Input:
// 145
// Output:
// 1

#include<stdio.h>

int checkStrong(int n);
int factorial(int n);

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", checkStrong(n));
}

int checkStrong(int n){
    int tmp = n;
    int sum = 0;
    while(n > 0){
        sum += factorial(n % 10);
        n /= 10;
    }
    if(sum == tmp)
        return 1;
    else
        return 0;
}

int factorial(int n){
    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}