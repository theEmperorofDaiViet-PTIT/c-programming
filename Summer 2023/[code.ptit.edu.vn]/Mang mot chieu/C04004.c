#include<stdio.h>

long long fibonacci(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibonacci(n));
    }
}

long long fibonacci(int n){
    long long f1 = 1;
    long long f2 = 1;
    long long tmp;
    for(int i = 2; i <= n; i++){
        tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    return f1;
}