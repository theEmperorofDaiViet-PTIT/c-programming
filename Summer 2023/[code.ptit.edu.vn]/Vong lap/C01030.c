// PHÂN TÍCH THỪA SỐ NGUYÊN TỐ 1

// Viết chương trình phân tích một số nguyên thành các thừa số nguyên tố.  

// Input
// Dòng đầu ghi số bộ test, mỗi bộ test ghi trên một dòng số nguyên dương cần phân tích (không quá 9 chữ số).
// Output
// Kết quả của mỗi bộ test ghi trên một dòng, mỗi thừa số cách nhau một khoảng trống.

// Ví dụ:
// Input:
// 2
// 10
// 20
// Output:
// 2 5
// 2 2 5

#include<stdio.h>
#include<math.h>

void primeFactorization(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        primeFactorization(n);
    }
}

void primeFactorization(int n){
    if(n % 2 == 0){
        while(n % 2 == 0 & n / 2 > 1){
            printf("%d ", 2);
            n /= 2;
        }
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            while(n % i == 0 & n / i > 1){
                printf("%d ", i);
                n /= i;
            }
        }
    }
    if(n > 2){
        printf("%d", n);
    }
    printf("\n");
}