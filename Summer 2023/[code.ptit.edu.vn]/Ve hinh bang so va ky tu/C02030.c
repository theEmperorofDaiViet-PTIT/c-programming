// TAM GIÁC KÝ TỰ - 4

// Nhập vào chiều cao tam giác (không quá 20).
// Vẽ hình tam giác ký tự theo nguyên tắc tương ứng theo mẫu trong ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi chiều cao (không quá 20).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 5
// Output:
// @
// @B@
// @BDB@
// @BDFDB@
// @BDFHFDB@

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    char arr[n];
    arr[0] = '@';
    for(int i = 1; i < n; i++){
        arr[i] = 64 + 2 * i;
    }

    for(int i = 1, k = 1; i <= n; i++, k += 2){
        for(int j = 1, l = 0; j <= k / 2 + 1; j++, l++){
            printf("%c", arr[l]);
        }
        for(int j = k / 2 + 2, l = i - 2; j <= k; j++, l--){
            printf("%c", arr[l]);
        }
        printf("\n");
    }
}