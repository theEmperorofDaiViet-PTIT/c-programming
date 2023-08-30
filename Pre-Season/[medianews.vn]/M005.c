// VẼ HÌNH CHỮ NHẬT THEO NGUYÊN TẮC A (3)

// Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật.
// Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.

// INPUT
// 5 5
// OUTPUT
// 54321
// 54322
// 54333
// 54444
// 55555

// Hoặc
// INPUT
// 4 6
// OUTPUT
// 654333
// 654444
// 655555
// 666666

// Hoặc
// INPUT
// 6 4
// OUTPUT
// 6543
// 6543
// 6543
// 6544
// 6555
// 6666

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = (a > b) ? a : b;

    for(int i = a - 1, k = n - i - 1; i >= 0; i--, k++){
        for(int j = 0, l = n - 1; j < i; j++, l--){
            if(j < b){
                printf("%d", l + 1);
            }
        }
        for(int j = b - i - 1; j >= 0; j--){
            printf("%d", k + 1);
        }
        printf("\n");
    }
}