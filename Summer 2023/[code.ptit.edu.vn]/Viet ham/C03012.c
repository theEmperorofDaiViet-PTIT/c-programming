// KIỂM TRA SỐ FIBONACCI 1

// Nhập vào một số n không quá 8 chữ số và kiểm tra số đó có thuộc dãy Fibonacci hay không. 
// Nếu thỏa mãn in ra 1, ngược lại in ra 0.

// Input:
// Chỉ có một số nguyên dương, không quá 8 chữ số.
// Output:
// In ra kết quả kiểm tra

// Ví dụ:
// Input:
// 8
// Output:
// 1

#include<stdio.h>

int fibonacci(int n);
int checkFibonacci(int n);


void main(){
    int n;
    scanf("%d", &n);
    printf("%d", checkFibonacci(n));
}

int fibonacci(int n){
    int f1 = 1;
    int f2 = 1;
    int tmp;
    for(int i = 2; i <= n; i++){
        tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    return f1;
}

int checkFibonacci(int n){
    int i = 1;
    while(fibonacci(i) <= n){
        if(fibonacci(i) == n)
            return 1;
        i++;
    }
    return 0;
}