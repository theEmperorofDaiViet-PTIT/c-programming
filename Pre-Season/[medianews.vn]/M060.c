// VẼ HÌNH CHỨA HÌNH THOI

// Viết chương trình C cho phép nhập n và in ra hình chứa hình thoi tương ứng

// INPUT
// 5
// OUTPUT
// **********
// ****~~****
// ***~~~~***
// **~~~~~~**
// *~~~~~~~~*
// **~~~~~~**
// ***~~~~***
// ****~~****
// **********

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        for(int j = 1; j <= 2 * (n - i); j++){
            printf("~");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        for(int j = 1; j <= 2 * (n - i); j++){
            printf("~");
        }
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}