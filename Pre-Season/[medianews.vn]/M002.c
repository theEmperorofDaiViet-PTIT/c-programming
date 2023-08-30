// PHÂN TÍCH MỘT SỐ THÀNH CÁC THỪA SỐ NGUYÊN TỐ

// Viết chương trình C cho phép nhập vào một số và phân tích thành thừa số các số nguyên tố.
// (Mỗi thừa số nguyên tố cách nhau một khoảng trắng, mỗi thừa số nguyên tố chỉ liệt kê một lần)

// INPUT
// 10
// OUTPUT
// 25

#include<stdio.h>
#include<math.h>

void primeFactorization(int n);

void main(){
    int n;
    scanf("%d", &n);
    primeFactorization(n);
}

void primeFactorization(int n){
    if(n % 2 == 0){
        printf("%d ", 2);
        while(n % 2 == 0 & n / 2 > 1){
            n /= 2;
        }
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            printf("%d ", i);
            while(n % i == 0 & n / i >= 1){
                n /= i;
            }
        }
    }
    if(n > 1){
        printf("%d", n);
    }
}