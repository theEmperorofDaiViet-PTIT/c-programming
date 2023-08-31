// VẼ HÌNH BÌNH HÀNH SAO

// Viết chương trình C cho phép nhập vào n là độ dài cạnh hình bình hành.
// Thực hiện in ra hình bình hành tương ứng.

// INPUT
// 5
// OUTPUT
// ~~~~*****
// ~~~*****
// ~~*****
// ~*****
// *****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            printf("~");
        }
        for(int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
}