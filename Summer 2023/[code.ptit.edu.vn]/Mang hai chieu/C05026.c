#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    int max = 0;
    int index = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(isPrime(a[i][j])){
                count++;
            }
        }
        if(count > max){
            max = count;
            index = i;
        }
    }
    printf("%d\n", index + 1);
    for(int i = 0; i < n; i++){
        if(isPrime(a[index][i])){
            printf("%d ", a[index][i]);
        }
    }    
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