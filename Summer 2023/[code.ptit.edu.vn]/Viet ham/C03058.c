#include<stdio.h>
#include<stdbool.h>

void createSieve(bool s[]);

void main(){
    bool sieve[101];
    for(int i = 0; i < 101; i++){
        sieve[i] = true;
    }
    createSieve(sieve);
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long LCM = 1;
        for(int i = 2; i <= n; i++){
            if(sieve[i] == true){
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

void createSieve(bool s[]){
    for(int i = 2; i * i <= 100; i++){
        if(s[i] == true){
            for(int j = i * i; j <= 100; j += i){
                s[j] = false;
            }
        }
    }
}