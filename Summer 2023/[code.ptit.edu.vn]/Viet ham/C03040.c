#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int getSumDigit(int n);
int getSumDigitOfPrimeFactors(int n);
bool isSmith(int n);

void main(){
    int n;
    scanf("%d", &n);
    (isSmith(n)) ? printf("YES") : printf("NO");
}

bool isSmith(int n){
    return getSumDigit(n) == getSumDigitOfPrimeFactors(n);
}

int getSumDigit(int n){
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int getSumDigitOfPrimeFactors(int n){
    int sum = 0;
    if(n % 2 == 0){
        int count = 0;
        while(n % 2 == 0 & n / 2 >= 1){
            count++;
            n /= 2;
        }
        sum += getSumDigit(2) * count;
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            int count = 0;
            while(n % i == 0 & n / i >= 1){
                count++;
                n /= i;
            }
            sum += getSumDigit(i) * count;
        }
    }
    if(n > 2){
        sum += getSumDigit(n);
    }
    return sum;
}