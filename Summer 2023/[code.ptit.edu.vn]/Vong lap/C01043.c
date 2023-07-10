#include<stdio.h>

int checkStrong(int n);
int factorial(int n);

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", checkStrong(n));
}

int checkStrong(int n){
    int tmp = n;
    int sum = 0;
    while(n > 0){
        sum += factorial(n % 10);
        n /= 10;
    }
    if(sum == tmp)
        return 1;
    else
        return 0;
}

int factorial(int n){
    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}