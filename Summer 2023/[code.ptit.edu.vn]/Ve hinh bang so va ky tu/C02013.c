// HÌNH CHỮ NHẬT - 4

// Nhập vào số hàng và số cột của hình chữ nhật (không quá 9). 
// Vẽ hình chữ nhật số theo nguyên tắc tương ứng theo mẫu trong các ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi số hàng và số cột của hình chữ nhật (không quá 9).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 4 4
// Output:
// 4321
// 3212
// 2123
// 1234

// Input:
// 4 6
// Output:
// 654321
// 543212
// 432123
// 321234

// Input:
// 6 4
// Output:
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

    for(int i = (a >= b) ? a - 1 : b - 1; i >= ((a >= b) ? 0 : b - a); i--){
        if(i < b){
            for(int j = i; j >= 0; j--){
                printf("%d", j + 1);
            }
            for(int j = 2; j < b - i + 1; j++){
                printf("%d", j);
            }

        }
        else{
            for(int j = i + 1; j >= i - b + 2; j--){
                printf("%d", j);
            }
        }
        printf("\n");
    }
}