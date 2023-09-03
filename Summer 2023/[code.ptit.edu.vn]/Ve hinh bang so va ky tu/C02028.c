// TAM GIÁC KÝ TỰ - 2

// Nhập vào chiều cao tam giác (không quá 20).
// Vẽ hình tam giác ký tự theo nguyên tắc tương ứng theo mẫu trong ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi chiều cao (không quá 20).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 4
// Output:
// ACEG
// CEG
// EG
// G

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    char arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = 65 + 2 * i;
    }

    for(int i = n - 1; i >= 0; i--){
        for(int j = n - i - 1; j < n; j++){
            printf("%c", arr[j]);
        }
        printf("\n");
    }
}