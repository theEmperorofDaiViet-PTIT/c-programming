#include<stdio.h>

void main(){
    long long arr[1000000];
    long long n;
    int length = 0;
    long long max = 0;
    long long min = 100000000;
    while(scanf("%lld", &n) != EOF){
        arr[length] = n;
        length++;
        max = (n > max) ? n : max;
        min = (n < min) ? n : min;
    }
    printf("%lld %lld", max, min);
}