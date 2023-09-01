// VẼ TAM GIÁC VUÔNG TRÁI

// Viết chương trình C cho phép nhập vào chiều cao của tam giác và in ra tam giác hình sao tương ứng.

// INPUT
// 5
// OUTPUT
// *
// **
// ***
// ****
// *****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}