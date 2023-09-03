// HÌNH CHỮ NHẬT KÝ TỰ - 3

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
// @ABC
// ABCC
// BCCC
// CCCC

// Input:
// 3 5
// Output:
// @ABCD
// ABCDD
// BCDDD

// Input:
// 5 3
// Output:
// @AB
// ABB
// BBB
// BBB
// BBB

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = b;
    char arr[n];
    arr[0] = '@';
    for(int i = 1; i < n; i++){
        arr[i] = 64 + i;
    }

    for(int i = 0; i < a; i++){
        for(int j = i, l = i; j < b; j++, l++){
            printf("%c", arr[l]);
        }
        for(int j = 0; j < i; j++){
            if(j < b){
                printf("%c", arr[n - 1]);
            }
        }
        printf("\n");
    }
}