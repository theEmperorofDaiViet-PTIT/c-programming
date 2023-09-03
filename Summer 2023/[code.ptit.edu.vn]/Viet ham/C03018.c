// SỐ ĐẸP 1

// Một số được coi là đẹp nếu nó là số nguyên tố và tổng chữ số là một số trong dãy Fibonaci. 
// Viết chương trình liệt kê trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số đẹp như vậy

// Input
// Chỉ có một dòng ghi hai số nguyên dương a,b (a có thể lớn hơn b) không quá 1000. 
// Output
// Ghi ra các số thỏa mãn trên một dòng, cách nhau một khoảng trống.

// Ví dụ:
// Input:
// 2 50
// Output:
// 2 3 5 11 17 23 41

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);
int sumDigit(int n);
int fibonacci(int n);
bool checkFibonacci(int n);

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int tmp = a;
    a = (a < b) ? a : b;
    b = (tmp >= b) ? tmp : b;
    for(int i = a; i <=b; i++){
        if(isPrime(i) && checkFibonacci(sumDigit(i))){
            printf("%d ", i);
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

int sumDigit(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int fibonacci(int n){
    int f1 = 1;
    int f2 = 1;
    int tmp;
    for(int i = 2; i <= n; i++){
        tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    return f1;
}

bool checkFibonacci(int n){
    int i = 1;
    while(fibonacci(i) <= n){
        if(fibonacci(i) == n)
            return true;
        i++;
    }
    return false;
}