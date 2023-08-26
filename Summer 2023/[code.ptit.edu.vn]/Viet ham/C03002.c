#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);


void main(){
    int n;
    scanf("%d", &n);
    if(n >= 2){
        printf("%d\n", 2);
    }
    for(int i = 3; i < n; i += 2){
        if(isPrime(i)){
            printf("%d\n", i);
        }
    }
}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    else if(n % 2 == 0){
        if(n == 2)  return true;
        else    return false;
    }
    else{
        for(int i = 3; i <= sqrt(n); i += 2){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}