// SẮP XẾP TĂNG DẦN THEO TỔNG CÁC CHỮ SỐ

// Viết chương trình C cho phép nhập vào 2 số a và b. Sắp xếp a, b theo thứ tự tăng dần tổng các chữ số.
// (Nếu a và b có tổng các chữ số bằng nhau thì in ra a trước)

// INPUT
// 99 1111

// OUTPUT
// 1111 99

#include<stdio.h>

int sumDigits(int n);

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    (sumDigits(a) <= sumDigits(b)) ? printf("%d %d", a, b) : printf("%d %d", b, a);
}

int sumDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}