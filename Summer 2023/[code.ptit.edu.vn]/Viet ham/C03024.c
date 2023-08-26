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