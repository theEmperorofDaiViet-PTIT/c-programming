#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void primeFactorization(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        primeFactorization(n);
    }
}

void primeFactorization(int n){
    printf("%d = ", n);
    bool firstFactorChecked = false;
    if(n % 2 == 0){
        firstFactorChecked = true;
        int count = 0;
        printf("%d", 2);
        while(n % 2 == 0 & n / 2 >= 1){
            count++;
            n /= 2;
        }
        printf("^%d ", count);
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            if(!firstFactorChecked){
                firstFactorChecked = true;
            }
            else{
                printf("* ");
            }
            int count = 0;
            printf("%d", i);
            while(n % i == 0 & n / i >= 1){
                count++;
                n /= i;
            }
            printf("^%d ", count);
        }
    }
    if(n > 2){
        printf("* %d^1", n);
    }
    printf("\n");
}