// LIỆT KÊ N SỐ FIBONACCI ĐẦU TIÊN

// Nhập vào số nguyên dương n không quá 30.
// In ra màn hình n số đầu tiên thuộc dãy Fibonacci (tính từ số 0).

// Input:
// Chỉ có một dòng ghi số n.
// Output:
// Ghi ra kết quả tính toán trên một dòng

// Ví dụ:
// Input:
// 8
// Output:
// 0 1 1 2 3 5 8 13

#include<stdio.h>

int fibonacci(int n);

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int n){
    int f1 = 0;
    int f2 = 1;
    int tmp;
    for(int i = 2; i <= n; i++){
        tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    return f1;
}