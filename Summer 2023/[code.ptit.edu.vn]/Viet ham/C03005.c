#include<stdio.h>

long gcd(long a, long b);

void main(){
    long a, b;
    scanf("%ld %ld", &a, &b);
    for(int i = a; i < b; i++){
        for(int j = i + 1; j <= b; j++){
            if(gcd(i, j) == 1){
                printf("(%d,%d)\n", i, j);
            }
        }
    }
}

long gcd(long a, long b){
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else  
        return gcd(a, b - a);
}