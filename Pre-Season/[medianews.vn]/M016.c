// VẼ TAM GIÁC CÂN (KIM TỰ THÁP) NGƯỢC RỖNG

// Viết chương trình C cho phép nhập vào số dòng và in ra tam giác cân ngược tương ứng.

// INPUT
// 5
// OUTPUT
// *********
// ~*.....*
// ~~*...*
// ~~~*.*
// ~~~~*

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < n - i - 1; j++){
            printf("~");
        }
        printf("*");
        for(int j = 0; j < 2 * i - 1; j++){
            if(i == n - 1){
                printf("*");
            }
            else{
                printf(".");
            }
        }
        if(i > 0){
            printf("*");
        }
        printf("\n");
    }

}