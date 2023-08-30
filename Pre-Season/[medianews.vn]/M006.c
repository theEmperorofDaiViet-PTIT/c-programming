// VẼ HÌNH CHỮ NHẬT THEO NGUYÊN TẮC D (2)

// Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật.
// Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.

// INPUT
// 4 4
// OUTPUT
// 4321
// 3212
// 2123
// 1234

// Hoặc
// INPUT
// 4 6
// OUTPUT
// 654321
// 543212
// 432123
// 321234


// Hoặc
// INPUT
// 6 4
// OUTPUT
// 6543
// 5432
// 4321
// 3212
// 2123
// 1234


#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = (a > b) ? a : b;

    for(int i = 0; i < a; i++){
        for(int j = n - i - 1; j > n - i - 1 - b && j >= 0; j--){
            printf("%d", j + 1);
        }
        for(int j = -1, l = 2; j > n - i - 1 - b; j--, l++){
            printf("%d", l);
        }
        printf("\n");
    }
}