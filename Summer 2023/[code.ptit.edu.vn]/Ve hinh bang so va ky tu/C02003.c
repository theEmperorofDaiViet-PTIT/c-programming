// HÌNH VUÔNG RỖNG VỚI DẤU *

// Viết chương trình nhập vào n (không quá 100) là cạnh của hình vuông và thực hiện in ra hình vuông rỗng các ký tự * theo mẫu trong ví dụ.

// Input
// Chỉ có một số nguyên dương N không quá 100.
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 4
// Output:
// ****
// *..*
// *..*
// ****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        if(i == 0 || i == n - 1){
            for(int j = 0; j < n; j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j = 1; j < n - 1; j++){
                printf(".");
            }
            printf("*");
        }
        printf("\n");
    }
}