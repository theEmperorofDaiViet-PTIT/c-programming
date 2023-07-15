#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n);

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(isPrime(a[i])){
            count++;
        }
    }
    printf("%d ", count);
    for(int i = 0; i < n; i++){
        if(isPrime(a[i])){
            printf("%d ", a[i]);
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