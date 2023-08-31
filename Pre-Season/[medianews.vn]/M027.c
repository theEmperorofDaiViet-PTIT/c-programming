// VẼ HÌNH CHỮ NHẬT TĂNG DẦN THEO SỐ THỨ TỰ HÀNG

// Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật.
// In ra hình chữ nhật tăng dần theo số thứ tự hàng tương ứng.

// INTPUT
// 5 4
// OUTPUT
// 1234
// 2345
// 3456
// 4567
// 5678

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= a; i++){
        for(int j = 0; j < b; j++){
            printf("%d", i + j);
        }
        printf("\n");
    }
}