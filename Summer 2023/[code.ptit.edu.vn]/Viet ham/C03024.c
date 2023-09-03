// SO SÁNH TỔNG CHỮ SỐ

// Viết chương trình nhập vào 2 số nguyên dương a và b không quá 6 chữ số. 
// Hãy so sánh và xếp lại theo thứ tự tăng dần tổng các chữ số.
// (Nếu a và b có tổng các chữ số bằng nhau thì in ra a trước)

// Ví dụ:
// Input:
// 99 1111
// Output:
// 1111 99

#include<stdio.h>

int sumDigit(int n);

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    (sumDigit(a) <= sumDigit(b)) ? printf("%d %d", a, b) : printf("%d %d", b, a);
}

int sumDigit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}