// HÌNH CHỮ NHẬT KÝ TỰ - 4

// Nhập vào số hàng và số cột của hình chữ nhật (không quá 20). 
// Vẽ hình chữ nhật ký tự theo nguyên tắc tương ứng theo mẫu trong các ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi số hàng và số cột của hình chữ nhật (không quá 20).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 4 4
// Output:
// DDDD
// CDDD
// BCDD
// ABCD

// Input:
// 3 5
// Output:
// CDEEE
// BCDEE
// ABCDE

// Input:
// 5 3
// Output:
// CCC
// CCC
// CCC
// BCC
// ABC

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = b;
    char arr[n];
    for(int i = n - 1; i >= 0; i--){
        arr[i] = 65 + i;
    }

    for(int i = 0; i < a; i++){
        for(int j = b - (i + b - a) - 1; j < b; j++){
            printf("%c", arr[j]);
        }
        for(int j = 0; j < b - (i + b - a) - 1; j++){
            if(j < b){
                printf("%c", arr[n - 1]);
            }
        }
        printf("\n");
    }
}