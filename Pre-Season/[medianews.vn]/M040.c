// VẼ HÌNH CHỮ NHẬT CÁC SỐ 1 VÀ 0 (ĐAN XEN)

// Viết chương trình C cho phép nhập vào hàng và cột và in ra hình chữ nhật số 1 và 0 tương ứng.

// INPUT
// 5 5
// OUTPUT
// 10101
// 01010
// 10101
// 01010
// 10101

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if((i - j) % 2 == 0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}