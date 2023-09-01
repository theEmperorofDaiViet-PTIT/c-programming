// VẼ MŨI TÊN SANG TRÁI

// Viết chương trình C nhập vào n và vẽ hình mũi tên sang trái tương ứng.

// INPUT
// 5
// OUTPUT
// ~~~~*****
// ~~~****
// ~~***
// ~**
// *
// ~**
// ~~***
// ~~~****
// ~~~~*****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            printf("~");
        }
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            printf("~");
        }
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}