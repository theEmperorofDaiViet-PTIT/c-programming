#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);
bool check(int n);

void main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 3; i < n; i += 2){
        if(check(i)){
            count++;
            printf("%d ", i);
        }
    }
    printf("\n%d", count);
}

bool check(int n){
    int sum = 0;
    int tmp = n;
    while(tmp > 0){
        sum += (tmp % 10);
        tmp /= 10;
    }
    return sum % 5 == 0 && isPrime(n);
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