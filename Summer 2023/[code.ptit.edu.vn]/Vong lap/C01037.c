#include<stdio.h>

void main(){
    int m, n;
    scanf("%d %d", &m, &n);

    int a = m < n ? m : n;
    int b = m < n ? n : m;
    int sum = 0;
    printf("%d", (b - a + 1) * (a + b) / 2);
}