// TAM GIÁC VUÔNG TRÁI

// Viết chương trình nhập vào chiều cao của tam giác (không quá 100) và in ra tam giác hình sao tương ứng theo mẫu trong ví dụ.

// Input
// Chỉ có một số dòng ghi chiều cao (không quá 100).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 5
// Output:
// *
// **
// ***
// ****
// *****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}