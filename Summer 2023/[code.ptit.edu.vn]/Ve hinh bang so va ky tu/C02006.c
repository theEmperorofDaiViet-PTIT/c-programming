// HÌNH BÌNH HÀNH NGƯỢC - RỖNG

// Viết chương trình nhập vào hàng và cột của hình bình hành (không quá 100). 
// Thực hiện in hình bình hành ngược và rỗng theo mẫu trong ví dụ.

// Input
// Chỉ có một số dòng ghi hai số a,b là số hàng và số cột (không quá 100).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 3 4
// Output:
// ****
// ~*..*
// ~~****

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < i; j++){
            printf("~");
        }
        if(i == 0 || i == a - 1){
            for(int j = 0; j < b; j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j = 1; j < b - 1; j++){
                printf(".");
            }
            printf("*");
        }
        printf("\n");
    }
}