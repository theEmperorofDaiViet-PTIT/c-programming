// TAM GIÁC SỐ - 3

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
// 131
// 13531
// 1357531
// 135797531

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1, k = 1; i <= n; i++, k += 2){
        for(int j = 1, l = 1; j <= k / 2 + 1; j++, l += 2){
            printf("%d", l);
        }
        for(int j = k / 2 + 2, l = k - 2; j <= k; j++, l -= 2){
            printf("%d", l);
        }
        printf("\n");
    }
}