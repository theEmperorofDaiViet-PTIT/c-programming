// HÌNH VUÔNG DẤU *

// Viết chương trình nhập vào n là cạnh của hình vuông và in ra hình vuông các ký tự *.

// Giá trị n không quá 100.

// Input
// Chỉ có một số nguyên dương N không quá 100.
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 4
// Output:
// ****
// ****
// ****
// ****

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("*");
        }
        printf("\n");
    }
}