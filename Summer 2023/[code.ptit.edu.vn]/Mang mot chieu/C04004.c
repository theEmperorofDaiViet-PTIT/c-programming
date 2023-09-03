// SỐ FIBONACCI

// Dãy số Fibonacci được định nghĩa theo công thức như sau:
// F1 = 1
// F2 = 1
// Fn = Fn-1 + Fn-2 với n > 2
// Viết chương trình tính số Fibonacci thứ n (với n không quá 92)

// Input: 
// Dòng đầu ghi số bộ test. Mỗi bộ test là một số nguyên n.
// Output: 
// Với mỗi bộ test, ghi ra số Fibonacci thứ n trên một dòng.

// Ví dụ:
// Input:
// 3
// 2
// 5
// 20
// Output:
// 1
// 5
// 6765

#include<stdio.h>

long long fibonacci(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibonacci(n));
    }
}

long long fibonacci(int n){
    long long f1 = 1;
    long long f2 = 1;
    long long tmp;
    for(int i = 2; i <= n; i++){
        tmp = f2;
        f2 = f1 + f2;
        f1 = tmp;
    }
    return f1;
}