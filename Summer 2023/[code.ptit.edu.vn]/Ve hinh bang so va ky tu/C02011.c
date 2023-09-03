// HÌNH CHỮ NHẬT - 2

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
// 2343
// 3432
// 4321

// Input:
// 3 5
// Output:
// 12345
// 23454
// 34543

// Input:
// 5 3
// Output:
// 123
// 232
// 321
// 432
// 543

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 0; i < a; i++){
        if(i < b){
            for(int j = i; j < b; j++){
                printf("%d", j + 1);
            }
            for(int j = b - 1; j >= b - i; j--){
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