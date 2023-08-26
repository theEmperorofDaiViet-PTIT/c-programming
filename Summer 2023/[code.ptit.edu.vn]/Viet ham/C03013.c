#include<stdio.h>

int fibonacci(int n);

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d ", fibonacci(i));
    }
}

int fibonacci(int n){
    int f1 = 0;
    int f2 = 1;
    int tmp;
    for(int i = 2; i <= n; i++){
        tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    return f1;
}