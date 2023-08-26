#include<stdio.h>
#include<math.h>

void primeFactorization(int n);

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n;
        scanf("%d", &n);
        printf("Test %d: ", t);
        primeFactorization(n);
    }

}

void primeFactorization(int n){
    if(n % 2 == 0){
        int count = 0;
        printf("%d", 2);
        while(n % 2 == 0 & n / 2 >= 1){
            count++;
            n /= 2;
        }
        printf("(%d) ", count);
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            int count = 0;
            printf("%d", i);
            while(n % i == 0 & n / i >= 1){
                count++;
                n /= i;
            }
            printf("(%d) ", count);
        }
    }
    if(n > 2){
        printf("%d(1)", n);
    }
    printf("\n");
}