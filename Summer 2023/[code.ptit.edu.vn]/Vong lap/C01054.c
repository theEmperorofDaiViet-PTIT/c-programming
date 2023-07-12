#include<stdio.h>
#include<math.h>

long long calculate(int n);

void main(){
    int t;
    scanf("%d", &t);
    long long sum = 0;
    while(t--){
        int n;
        scanf("%d", &n);
        sum += calculate(n);
    }
    printf("%lld", sum);
}

long long calculate(int n){
    long long sum = 0;
    if(n % 2 == 0){
        while(n % 2 == 0 & n / 2 >= 1){
            sum += 2;
            n /= 2;
        }
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            while(n % i == 0 & n / i >= 1){
                sum += i;
                n /= i;
            }
        }
    }
    if(n > 2){
        sum += n;
    }
    return sum;
}