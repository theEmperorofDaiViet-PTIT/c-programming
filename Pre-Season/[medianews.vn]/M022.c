// VẼ HÌNH HỘP CÁC SỐ 1 CHỨA SỐ 0

// Viết chương trình C cho phép nhập vào hàng và cột của hình chữ nhật và in ra hình chữ nhật các chữ số 1 và 0 tương ứng.

// INPUT
// 4 4
// OUTPUT
// 1111
// 1001
// 1001
// 1111

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++){
        printf("1");
        for(int j = 1; j < b - 1; j++){
            if(i == 0 || i == a - 1){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("1\n");
    }
}