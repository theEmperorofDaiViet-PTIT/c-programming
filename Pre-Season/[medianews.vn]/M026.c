// LIỆT KÊ N SỐ ĐẦU TIÊN THUỘC DÃY FIBONACCI

// Viết chương trình C cho phép nhập vào n và in ra màn hình n số đầu tiên thuộc dãy fibonacci

// INPUT
// 10
// OUTPUT
// 0 1 1 2 3 5 8 13 21 34

#include<stdio.h>

int fibonacci(int n);

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int n){
    int f1 = 0;
    int f2 = 1;
    int tmp;
    for(int i = 2; i <= n; i++){
        tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    return f1;
}