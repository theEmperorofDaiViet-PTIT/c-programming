// VẼ TAM GIÁC VUÔNG PHẢI

// Viết chương trình C cho phép nhập vào chiêu cao của tam giác và thực hiện in
// ra tam giác vuông.

// INPUT
// 5
// OUTPUT
// ~~~~*
// ~~~**
// ~~***
// ~****
// *****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            printf("~");
        }
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}