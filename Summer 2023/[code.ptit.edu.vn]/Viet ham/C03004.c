#include<stdio.h>

long gcd(long a, long b);
long lcm(long a, long b);

void main(){
    long a, b;
    scanf("%ld %ld", &a, &b);
    printf("%ld\n%ld", gcd(a, b), lcm(a, b));
}

long gcd(long a, long b){
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else  
        return gcd(a, b - a);
}

long lcm(long a, long b){
    return a * b / gcd(a, b);
}