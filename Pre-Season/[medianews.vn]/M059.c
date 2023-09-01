// VẼ HÌNH BÌNH HÀNH NGƯỢC SAO

// Viết chương trình C cho phép nhập vào số hàng và cột của hình bình hành.
// Thực hiện in ra hình bình hành ngược

// INPUT
// 3 5
// OUTPUT
// *****
// ~*****
// ~~*****

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < i; j++){
            printf("~");
        }
        for(int j = 0; j < b; j++){
            printf("*");
        }
        printf("\n");
    }
}