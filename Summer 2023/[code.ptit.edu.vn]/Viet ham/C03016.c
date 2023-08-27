#include<stdio.h>

long long fibonacci(long long n);
long long checkFibonacci(long long n);


void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        (checkFibonacci(n)) ? printf("YES\n") : printf("NO\n");
    }
}

long long fibonacci(long long n){
    long long f1 = 0;
    long long f2 = 1;
    long long tmp;
    for(long long i = 2; i <= n; i++){
        tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    return f1;
}

long long checkFibonacci(long long n){
    long long i = 1;
    while(fibonacci(i) <= n){
        if(fibonacci(i) == n)
            return 1;
        i++;
    }
    return 0;
}