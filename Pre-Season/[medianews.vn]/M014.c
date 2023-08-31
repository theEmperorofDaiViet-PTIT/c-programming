// LIỆT KÊ CÁC SỐ NGUYÊN TỐ NHỎ HƠN N

// Viết chương trình liệt kê các số nguyên tố nhỏ hơn N với N là một số nguyên dương không quá 10^6.
// Kết quả ghi mỗi số nguyên tố trên một dòng, theo thứ tự từ nhỏ đến lớn.

// INPUT
// 10
// OUTPUT
// 2
// 3
// 5
// 7

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);


void main(){
    int n;
    scanf("%d", &n);
    if(n >= 2){
        printf("%d\n", 2);
    }
    for(int i = 3; i < n; i += 2){
        if(isPrime(i)){
            printf("%d\n", i);
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