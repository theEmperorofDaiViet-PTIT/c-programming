#include<stdio.h>
#include<math.h>

int recalculate(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", recalculate(n));
    }
}

int recalculate(int n){
    int product = 1;
    if(n % 2 == 0){
        product *= 2;
        while(n % 2 == 0 & n / 2 > 1){
            n /= 2;
        }
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            product *= i;
            while(n % i == 0 & n / i >= 1){
                n /= i;
            }
        }
    }
    if(n > 2){
        product *= n;
    }
    return product;
}