// TAM GIÁC SỐ - 2

// Nhập vào chiều cao tam giác (không quá 9).
// Vẽ hình tam giác số theo nguyên tắc tương ứng theo mẫu trong ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi chiều cao (không quá 9).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 5
// Output:
// 1
// 24
// 135
// 2468
// 13579

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            for(int j = 2; j <= 2 * i; j += 2){
                printf("%d", j);
            }
        }
        else{
            for(int j = 1; j <= 2 * i - 1; j += 2){
                printf("%d", j);
            }
        }
        printf("\n");
    }
}