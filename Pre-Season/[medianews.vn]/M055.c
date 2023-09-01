// DẠNG BÀI TẬP VỀ VẼ HÌNH BẰNG SỐ

// Viết chương trình nhập vào n và in ra hình theo quy luật

// INPUT
// 5
// OUTPUT
// 55555
// 54444
// 54333
// 54322
// 54321

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    for(int i = 0, k = n - 1; i < n; i++, k--){
        for(int j = 0, l = n - 1; j < i; j++, l--){
            if(j < n){
                printf("%d", l + 1);
            }
        }
        for(int j = i; j < n; j++){
            printf("%d", k + 1);
        }
        printf("\n");
    }
}