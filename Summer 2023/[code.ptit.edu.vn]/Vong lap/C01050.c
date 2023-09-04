// HÌNH CHỮ NHẬT DẤU *

// Nhập vào kích thước chiều rộng, chiều cao và in ra hình chữ nhật các dấu * nhưng rỗng bên trong. Các dấu * được in sát cạnh nhau.
// Dữ liệu vào chỉ có 2 số nguyên dương là chiều rộng và chiều cao (không quá 40).

// Ví dụ:
// Input:
// 5 4
// Output:
// *****
// *   *
// *   *
// *****

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            if(i == 0 || i == b - 1){
                printf("*");
            }
            else{
                (j == 0 || j == a - 1) ? printf("*") : printf(" ");
            }
        }
        printf("\n");
    }
}