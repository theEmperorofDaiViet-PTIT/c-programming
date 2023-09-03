// TAM GIÁC KÝ TỰ - 5

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
// DEFGH
// CDEF
// BCD
// AB
// @

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    char arr[2 * n - 1];
    arr[0] = '@';
    for(int i = 1; i < 2 * n - 1; i++){
        arr[i] = 64 + i;
    }

    for(int i = n - 1, k = 0; i >= 0; i--, k += 2){
        for(int j = 2 * n - i - 2; j < 2 * n - 1; j++){
            printf("%c", arr[j - k]);
        }
        printf("\n");
    }
}