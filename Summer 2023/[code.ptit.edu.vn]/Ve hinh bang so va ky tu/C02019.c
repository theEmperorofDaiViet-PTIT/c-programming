// TAM GIÁC SỐ - 5

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
// 2
// 242
// 24642
// 2468642
// 2468108642

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1, k = 1; i <= n; i++, k += 2){
        for(int j = 1, l = 2; j <= k / 2 + 1; j++, l += 2){
            printf("%d", l);
        }
        for(int j = k / 2 + 2, l = k - 1; j <= k; j++, l -= 2){
            printf("%d", l);
        }
        printf("\n");
    }
}