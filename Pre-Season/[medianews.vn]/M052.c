// TÌM BỘI CHUNG NHỎ NHẤT CỦA HAI SỐ

// Viết chương trình C cho phép nhập vào hai số a và b.
// Thực hiện tìm bội chung nhỏ nhất của a và b và in ra màn hình.

// INPUT
// 12 30
// OUTPUT
// 60

#include<stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", lcm(a, b));
}

int gcd(int a, int b){
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else  
        return gcd(a, b - a);
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}