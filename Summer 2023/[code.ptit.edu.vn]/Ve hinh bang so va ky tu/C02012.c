// HÌNH CHỮ NHẬT - 3

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
// 1234
// 2123
// 3212
// 4321

// Input:
// 4 6
// Output:
// 123456
// 212345
// 321234
// 432123

// Input:
// 6 4
// Output:
// 1234
// 2123
// 3212
// 4321
// 5432
// 6543

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 0; i < a; i++){
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