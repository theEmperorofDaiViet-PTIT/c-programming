// TÍCH CHỮ SỐ

// Cho một số nguyên dương N.
// Thực hiện tìm tích của các chữ số và in ra màn hình.

// Input
// Chỉ có một dòng ghi số nguyên dương N (không quá 9 chữ số)
// Output
// Ghi ra kết quả trên một dòng

// Ví dụ:
// Input:
// 1234
// Output:
// 24

#include<stdio.h>

void main(){
    char a[10];
    scanf("%s", &a);
    int product = 1;
    for(int i = 0; i < 10; i++){
        if(a[i] >= 48 && a[i] <= 57){
            product *= (a[i] - 48);
        }
    }
    printf("%d", product);
}