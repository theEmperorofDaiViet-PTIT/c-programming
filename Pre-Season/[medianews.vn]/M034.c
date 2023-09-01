// VẼ HÌNH CHỮ NHẬT THEO NGUYÊN TẮC A (1)

// Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhât.
// Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.

// INPUT
// 5 5
// OUTPUT
// 55555
// 54444
// 54333
// 54322
// 54321

// Hoặc
// INPUT
// 4 6
// OUTPUT
// 666666
// 655555
// 654444
// 654333

// Hoặc
// INPUT
// 6 4
// OUTPUT
// 6666
// 6555
// 6544
// 6543
// 6543
// 6543

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = (a > b) ? a : b;

    for(int i = 0, k = n - 1; i < a; i++, k--){
        for(int j = 0, l = n - 1; j < i; j++, l--){
            if(j < b){
                printf("%d", l + 1);
            }
        }
        for(int j = i; j < b; j++){
            printf("%d", k + 1);
        }
        printf("\n");
    }
}