// SỐ HOÀN HẢO NHỎ HƠN N

// Số hoàn hảo là số có tổng các ước số (nhỏ hơn chính nó) bằng nó. Ví dụ: 6 = 1 + 2 + 3.
// Viết chương trình cho phép nhập vào số n (không quá 6 chữ số) và liệt kê các số hoàn hảo nhỏ hơn n.

// Input:
// Chỉ có một dòng ghi số n.
// Output:
// Ghi ra kết quả tính toán trên một dòng

// Ví dụ:
// Input:
// 1000
// Output:
// 6 28 496

#include<stdio.h>
#include<math.h>

int isPerfectNumber(int n);

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 2; i < n; i++){
        if(isPerfectNumber(i)){
            printf("%d ", i);
        }
    }
}

int isPerfectNumber(int n){
    int sum = 1;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            sum += i + (n / i);
        }
    }
    if(sum == n)
        return 1;
    else
        return 0;
}