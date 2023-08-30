// VẼ TAM GIÁC VUÔNG NGƯỢC

// Viết chương trình C cho phép nhập vào chiều cao của tam giác và thực hiện in ra tam giác sao ngược

// INPUT
// 5
// OUTPUT
// *****
// ****
// ***
// **
// *

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    while(n--){
        for(int i = 0; i <= n; i++){
            printf("*");
        }
        printf("\n");
    }
}