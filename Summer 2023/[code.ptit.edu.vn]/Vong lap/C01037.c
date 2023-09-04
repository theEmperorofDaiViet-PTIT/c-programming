// TÍNH TỔNG TRONG ĐOẠN

// Cho hai số nguyên dương a, b không quá 10^6.
// Thực hiện tính tổng các số tự nhiên nằm trong đoạn [a, b] và in ra màn hình.
// (Lưu ý có thể nhập a lớn hơn b)

// Input
// Chỉ có một dòng ghi hai số nguyên dương a, b (không quá 6 chữ số)
// Output
// Ghi ra kết quả trên một dòng

// Ví dụ:
// Input:
// 1 10
// Output:
// 55

#include<stdio.h>

void main(){
    int m, n;
    scanf("%d %d", &m, &n);

    int a = m < n ? m : n;
    int b = m < n ? n : m;
    int sum = 0;
    printf("%d", (b - a + 1) * (a + b) / 2);
}