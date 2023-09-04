// TÍCH THỪA SỐ NGUYÊN TỐ

// Cho một số nguyên dương không quá 9 chữ số. 
// Người ta phân tích số đó thành tích các thừa số nguyên tố sau đó tính lại một giá trị mới bằng cách nhân các thừa số nguyên tố khác nhau của số đó.
// Ví dụ: Số 72 được phân tích thành 2^3 * 3^2. Giá trị tính được sẽ lã 2 * 3 = 6

// Dữ liệu vào
// Dòng đầu ghi số bộ test, không quá 10
// Mỗi bộ test là một số nguyên dương không quá 10^9
// Kết quả
// Với mỗi bộ test, ghi ra kết quả tính được.

// Ví dụ:
// Input:
// 3
// 72
// 1000
// 997
// Output:
// 6
// 10
// 997

#include<stdio.h>
#include<math.h>

int recalculate(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%d\n", recalculate(n));
    }
}

int recalculate(int n){
    int product = 1;
    if(n % 2 == 0){
        product *= 2;
        while(n % 2 == 0 & n / 2 > 1){
            n /= 2;
        }
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            product *= i;
            while(n % i == 0 & n / i >= 1){
                n /= i;
            }
        }
    }
    if(n > 2){
        product *= n;
    }
    return product;
}