// PHÂN TÍCH THỪA SỐ NGUYÊN TỐ 2

// Viết chương trình phân tích một số nguyên dương (không quá 6 chữ số) thành tích các thừa số nguyên tố.
// Kết quả được viết theo mẫu trong Ví dụ (có chữ x giữa các thừa số)

// Input:
// Chỉ có một dòng ghi số n.
// Output:
// Ghi ra kết quả tính toán

// Ví dụ:
// Input:
// 28
// Output:
// 2x2x7

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
        while(n % 2 == 0 & n / 2 > 1){
            printf("%d", 2);
            n /= 2;
            if(n > 1) printf("x");
        }
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            while(n % i == 0 & n / i > 1){
                printf("%d", i);
                n /= i;
                if(n > 1) printf("x");
            }
        }
    }
    if(n > 2){
        printf("%d", n);
    }
    printf("\n");
}