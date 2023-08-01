#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long LCM = 1;
        for(int i = 2; i <= n; i++){
            if(isPrime(i)){
                int pp = i;
                while(pp * i <= n){
                    pp *= i;
                }
                LCM *= pp;
            }
        }
        printf("%lld\n", LCM);
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