// VẼ HÌNH CHỮ NHẬT CÁC CỘT VỚI CHỮ SỐ TĂNG DẦN

// Viết chương trình C cho phép nhập vào số hàng, số cột của hình chữ nhật và in ra hình chữ nhật số tương ứng.

// INPUT
// 5 4
// OUTPUT
// 1234
// 1234
// 1234
// 1234
// 1234

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}