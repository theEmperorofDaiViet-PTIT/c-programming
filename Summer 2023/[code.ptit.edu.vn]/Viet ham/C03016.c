// KIỂM TRA SỐ FIBONACCI 2

// Cho số nguyên dương n. Hãy kiểm tra xem n có phải là số trong dãy Fibonacci hay không?

// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số nguyên dương n.
// T, n thỏa mãn ràng buộc :1 ≤ T ≤ 100; 1 ≤ n ≤ 10^18.
// Output:
// Đưa ra “YES” hoặc “NO” tương ứng với n là số Fibonacci hoặc không phải số Fibonacci của mỗi test theo từng dòng.

// Ví dụ:
// Input:
// 2
// 8
// 15
// Output:
// YES
// NO

#include<stdio.h>

long long fibonacci(long long n);
long long checkFibonacci(long long n);


void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        (checkFibonacci(n)) ? printf("YES\n") : printf("NO\n");
    }
}

long long fibonacci(long long n){
    long long f1 = 0;
    long long f2 = 1;
    long long tmp;
    for(long long i = 2; i <= n; i++){
        tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    return f1;
}

long long checkFibonacci(long long n){
    long long i = 1;
    while(fibonacci(i) <= n){
        if(fibonacci(i) == n)
            return 1;
        i++;
    }
    return 0;
}