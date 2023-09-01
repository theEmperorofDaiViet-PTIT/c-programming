// VẼ HÌNH CHỮ NHẬT CÁC SỐ 1

// Viết chương trình C cho phép nhập vào số hàng và cột của hình chữ nhật và in ra hình chữ nhật các số tương ứng.

// INPUT
// 5 5
// OUTPUT
// 11111
// 11111
// 11111
// 11111
// 11111

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("1");
        }
        printf("\n");
    }
}