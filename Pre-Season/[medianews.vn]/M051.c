// TÌM ƯỚC CHUNG LỚN NHẤT CỦA HAI SỐ

// Viết chương trình C cho phép nhập vào hai số a, b.
// Thực hiện tìm ước chung lớn nhất của a và b và in ra màn hinh.

// INPUT
// 12 30
// OUTPUT
// 6

#include<stdio.h>

int gcd(int a, int b);

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
}

int gcd(int a, int b){
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else  
        return gcd(a, b - a);
}