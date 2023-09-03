// HÌNH CHỮ NHẬT KÝ TỰ - 2

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
// ABCD
// BCDA
// CDBA
// DCBA

// Input:
// 3 5
// Output:
// ABCDE
// BCDEA
// CDEBA

// Input:
// 5 3
// Output:
// ABC
// BCA
// CBA
// CBA
// CBA

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = (a > b) ? a : b;
    char arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = 65 + i;
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%c", arr[j]);
        }
        if(i < b - 1){
            int tmp = arr[0];
            for(int j = 0; j < b - i - 1; j++){
                arr[j] = arr[j + 1];
            }
            arr[b - i - 1] = tmp;
        }
        printf("\n");
    }
}