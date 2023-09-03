// GIÁ TRỊ TRUNG BÌNH CỦA MỘT MẢNG

// Cho một dãy N các phần tử nguyên. Tính giá trị trung bình (để sau dấu phẩy đúng 3 chữ số)

// Input:
// Hai dòng, dòng đầu là số phần tử; dòng tiếp theo sau là dòng các phần tử
// Output:
// Giá trị trung bình của dãy với 3 chữ số sau dấu phẩy

// Ví dụ:
// Input:
// 4
// 2  4  1  2
// Output:
// 2.250

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%.3f", (double) sum / n);
}