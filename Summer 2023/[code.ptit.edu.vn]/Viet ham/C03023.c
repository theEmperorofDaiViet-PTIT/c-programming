#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPalindrome(int n);
bool containNine(int n);

void main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 2; i < n; i++){
        if(isPalindrome(i) && !containNine(i)){
            count++;
            printf("%d ", i);
        }
    }
    printf("\n%d", count);
}

bool isPalindrome(int n){
    int length = 0;
    while(n / (int) pow(10, length) > 0){
        length++;
    }
    for(int i = 0, j = length - 1; i < length; i++, j--){
        if((n / (int) pow(10, i)) % 10 != (n / (int) pow(10, j)) % 10){
            return false;
        }
    }
    return true;
}

bool containNine(int n){
    while(n > 0){
        if(n % 10 == 9){
            return true;
        }
        n /= 10;
    }
    return false;
}