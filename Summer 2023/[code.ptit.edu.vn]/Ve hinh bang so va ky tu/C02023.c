// HÌNH CHỮ NHẬT KÝ TỰ - 1

// Nhập vào số hàng và số cột của hình chữ nhật (không quá 20). 
// Vẽ hình chữ nhật ký tự theo nguyên tắc tương ứng theo mẫu trong các ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi số hàng và số cột của hình chữ nhật (không quá 20).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 5 5
// Output:
// eeeee
// edddd
// edccc
// edcbb
// edcba

// Input:
// 4 6
// Output:
// ffffff
// feeeee
// fedddd
// fedccc

// Input:
// 6 4
// Output:
// ffff
// feee
// fedd
// fedc
// fedc
// fedc

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = (a > b) ? a : b;
    char arr[n];
    for(int i = n; i >= 0; i--){
        arr[i] = 97 + i;
    }

    for(int i = 0, k = n - 1; i < a; i++, k--){
        for(int j = 0, l = n - 1; j < i; j++, l--){
            if(j < b){
                printf("%c", arr[l]);
            }
        }
        for(int j = i; j < b; j++){
            printf("%c", arr[k]);
        }
        printf("\n");
    }
}