// SỐ SMITH

// Một số Smith là một số tự nhiên thỏa mãn tổng các chữ số của nó bằng với tổng các chữ số của các thừa số nguyên tố của nó.
// Nhiệm vụ của bạn là hãy xác định xem số nguyên N đã cho có là số Smith hay không?

// Ví dụ 1:
// 378 = 2 x 3 x 3 x 3 x 7
// Tổng các chữ số là 3 + 7 + 8 = 18.
// Tổng các chữ số của các nhân tử là 2 + 3 + 3 + 3 + 7 = 18.

// Ví dụ 2:
// 4937775 = 3 x 5 x 5 x 65837.
// Ta có 4+9+3+7+7+7+5 = 42 = 3+5+5+6+5+8+3+7.

// Input
// Chỉ có một số nguyên dương N không quá 9 chữ số.
// Output
// In ra “YES” nếu số đã cho là số Smith, in ra “NO” trong trường hợp ngược lại.

// Ví dụ:
// Input:
// 378
// Output:
// YES

// Input:
// 120
// Output:
// NO

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int getSumDigit(int n);
int getSumDigitOfPrimeFactors(int n);
bool isSmith(int n);

void main(){
    int n;
    scanf("%d", &n);
    (isSmith(n)) ? printf("YES") : printf("NO");
}

bool isSmith(int n){
    return getSumDigit(n) == getSumDigitOfPrimeFactors(n);
}

int getSumDigit(int n){
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

int getSumDigitOfPrimeFactors(int n){
    int sum = 0;
    if(n % 2 == 0){
        int count = 0;
        while(n % 2 == 0 & n / 2 >= 1){
            count++;
            n /= 2;
        }
        sum += getSumDigit(2) * count;
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            int count = 0;
            while(n % i == 0 & n / i >= 1){
                count++;
                n /= i;
            }
            sum += getSumDigit(i) * count;
        }
    }
    if(n > 2){
        sum += getSumDigit(n);
    }
    return sum;
}