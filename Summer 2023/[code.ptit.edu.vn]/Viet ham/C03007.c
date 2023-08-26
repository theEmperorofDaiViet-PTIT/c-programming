#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

bool check(int n);
bool isPrime(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        a = (a % 2 == 0) ? a + 1 : a;
        int count = 0;
        for(int i = a; i <= b; i += 2){
            if(check(i) && isPrime(i)){
                printf("%d ", i);
                count++;
            }
            if(count == 10){
                printf("\n");
                count = 0;
            }
        }
        printf("\n");
    }
}

bool check(int n){
    int length = 0;
    while(n / (int) pow(10, length) > 0){
        length++;
    }
    char s[length];
    int i = length;
    while(n > 0){
        s[i - 1] = n % 10;
        n /= 10;
        i--;
    }
    for(int i = 0; i < length / 2; i++){
        if(s[i] != s[length - i - 1]){
            return false;
        }
    }
    return true;
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