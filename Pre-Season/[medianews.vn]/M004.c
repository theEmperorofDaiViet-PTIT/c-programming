// VẼ HÌNH VUÔNG CÁC KÝ TỰ SAO

// Viết chương trình C cho phép nhập vào n là cạnh của hình vuông và in ra hình vuông các ký tự *.

// INPUT
// 4
// OUTPUT
// ****
// ****
// ****
// ****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
}