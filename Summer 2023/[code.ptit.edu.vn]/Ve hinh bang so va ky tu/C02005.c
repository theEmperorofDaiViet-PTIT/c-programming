// HÌNH BÌNH HÀNH NGƯỢC

// Viết chương trình nhập vào số hàng và cột của hình bình hành (không quá 100). 
// Thực hiện in ra hình bình hành ngược theo mẫu trong ví dụ.

// Input
// Chỉ có một số dòng ghi hai số a,b là số hàng và số cột (không quá 100).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 3 5
// Output:
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