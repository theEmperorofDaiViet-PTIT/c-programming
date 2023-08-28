#include<stdio.h>
#include<stdbool.h>

bool sieve[10000008];

void createSieve();
bool check(int n);

void main(){
    int t;
    scanf("%d", &t);
    createSieve();
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        // int tmp = a;
        // a = (a <= b) ? a : b;
        // b = (tmp <= b) ? b : tmp;
        int count = 0;
        // if(a <= 2){
        //     count++;
        // }
        // a = (a >= 2) ? a : 2;
        // a = (a % 2 == 0) ? a + 1 : a;

        for(int i = a; i < b; i++){
            if(check(i)){
                count++;
            }
        }
        printf("%d\n", count);
    }
}

void createSieve(){
    sieve[0] = false;
    sieve[1] = false;
    for(int i = 2; i <= 10000007; i++){
        sieve[i] = true;
    }
    for(int i = 2; i * i <= 10000007; i++){
        if(sieve[i] == true){
            for(int j = i * i; j <= 10000007; j += i){
                sieve[j] = false;
            }
        }
    }
}

bool check(int n){
    if(!sieve[n]){
        return false;
    }
    int sum = 0;
    while(n > 0){
        if(!sieve[n % 10]){
            return false;
        }
        sum += (n % 10);
        n /= 10;
    }
    return sieve[sum];
}