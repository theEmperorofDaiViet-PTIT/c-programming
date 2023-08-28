#include<stdio.h>
#include<math.h>

long maxPrimeFactor(long n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long n;
        scanf("%ld", &n);
        printf("%ld\n", maxPrimeFactor(n));
    }
}

long maxPrimeFactor(long n){
    long max = 0;
    if(n % 2 == 0){
        max = 2;
        while(n % 2 == 0 & n / 2 >= 1){
            n /= 2;
        }
    }
    for(long i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            max = i;
            while(n % i == 0 & n / i >= 1){
                n /= i;
            }
        }
    }
    if(n > 2){
        max = n;
    }
    return max;
}