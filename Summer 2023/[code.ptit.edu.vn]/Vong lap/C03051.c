#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long l, r;
        scanf("%lld %lld", &l, &r);
        int count = 0;
        if(l > r){
            printf("%d\n", 0);
            continue;
        }
        if(sqrt(l) <= 2) count++;
        long long i = (ceil(sqrt(l)) > 3) ? ceil(sqrt(l)): 3;
        for(; i <= sqrt(r); i += 2){
            if(isPrime(i)){
                count++;
            }
        }
        printf("%d\n", count);
    }

}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    if(n % 2 == 0){
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