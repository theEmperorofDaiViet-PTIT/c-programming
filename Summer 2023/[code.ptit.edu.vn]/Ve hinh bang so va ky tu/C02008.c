// TAM GIÁC VUÔNG TRÁI - RỖNG

// Viết chương trình nhập vào chiều cao của tam giác (không quá 100) và in ra tam giác hình sao rỗng tương ứng theo mẫu trong ví dụ.

// Input
// Chỉ có một số dòng ghi chiều cao (không quá 100).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 5
// Output:
// *
// **
// *.*
// *..*
// *****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        if(i <= 1 || i == n - 1){
            for(int j = 0; j <= i; j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j = 1; j <= i - 1; j++){
                printf(".");
            }
            printf("*");
        }
        printf("\n");
    }
}