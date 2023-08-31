// TÍNH TỔNG CÁC SỐ NGUYÊN TỐ NHỎ HƠN N

// Viết chương trình C cho phép nhập vào n và tính tổng các số nguyên tố nhỏ hơn n.

// INPUT
// 10
// OUTPUT
// 17

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);


void main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    if(n >= 2){
        sum += 2;
    }
    for(int i = 3; i < n; i += 2){
        if(isPrime(i)){
            sum += i;
        }
    }
    printf("%d", sum);
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