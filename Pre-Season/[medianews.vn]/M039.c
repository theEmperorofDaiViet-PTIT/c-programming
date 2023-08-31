// VẼ HÌNH VUÔNG RỖNG CÁC KÝ TỰ SAO

// Viết chương trình C cho phép nhập vào n là cạnh của hình vuông và thực hiện in ra hình vuông rỗng các ký tự *.

// INPUT
// 4
// OUTPUT
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
