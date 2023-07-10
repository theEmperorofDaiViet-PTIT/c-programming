#include<stdio.h>
#include<math.h>

int isPerfectNumber(int n);

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", isPerfectNumber(n));
}

int isPerfectNumber(int n){
    int sum = 1;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            sum += i + (n / i);
        }
    }
    if(sum == n)
        return 1;
    else
        return 0;
}