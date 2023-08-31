// TÌM GIÁ TRỊ LỚN NHẤT TRONG HAI SỐ

// Viết chương trình C tìm giá trị lớn nhất trong hai số

// INPUT
// 10 5
// OUTPUT
// 10

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    (a >= b) ? printf("%d", a) : printf("%d", b);
}