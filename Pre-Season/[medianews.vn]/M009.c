// VẼ MỘT NỬA HÌNH THOI BÊN TRÁI

// Viết chương trình C nhập vào số cột của một nửa hình thoi bên phải và in ra hình tương ứng.

// INPUT
// 5
// OUTPUT
// ~~~~*
// ~~~**
// ~~***
// ~****
// *****
// ~****
// ~~***
// ~~~**
// ~~~~*

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = n - i - 1; j > 0; j--){
            printf("~");
        }
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n - 2; i >= 0; i--){
        for(int j = n - i - 1; j > 0; j--){
            printf("~");
        }
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
}