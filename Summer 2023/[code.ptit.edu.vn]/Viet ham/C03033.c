// PHÂN TÍCH THỪA SỐ NGUYÊN TỐ

// Hãy phân tích một số nguyên dương thành tích các thừa số nguyên tố.

// Input
// Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương n không quá 9 chữ số.
// Output
// Mỗi bộ test viết ra kết quả phân tích theo mẫu như trong ví dụ (chú ý: giữa các số với dấu * có một khoảng trống).

// Ví dụ:
// Input:
// 3
// 60
// 128
// 10000
// Output:
// 60 = 2^2 * 3^1 * 5^1
// 128 = 2^7
// 10000 = 2^4 * 5^4

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

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
    printf("%d = ", n);
    bool firstFactorChecked = false;
    if(n % 2 == 0){
        firstFactorChecked = true;
        int count = 0;
        printf("%d", 2);
        while(n % 2 == 0 & n / 2 >= 1){
            count++;
            n /= 2;
        }
        printf("^%d ", count);
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            if(!firstFactorChecked){
                firstFactorChecked = true;
            }
            else{
                printf("* ");
            }
            int count = 0;
            printf("%d", i);
            while(n % i == 0 & n / i >= 1){
                count++;
                n /= i;
            }
            printf("^%d ", count);
        }
    }
    if(n > 2){
        printf("* %d^1", n);
    }
    printf("\n");
}