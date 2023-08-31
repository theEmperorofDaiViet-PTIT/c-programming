// VẼ TAM GIÁC VUÔNG PHẢI (RỖNG) 

// Viết chương trình C cho phép nhập vào chiều cao của tam giác và thực hiện in ra tam giác vuông.

// INPUT
// 5
// OUTPUT
// ~~~~*
// ~~~**
// ~~*.*
// ~*..*
// *****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            printf("~");
        }
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