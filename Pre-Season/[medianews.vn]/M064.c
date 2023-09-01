// KIỂM TRA SỐ HOÀN HẢO

// Số hoàn hảo là số có tổng các ước số (nhỏ hơn chính nó) bằng nó. Ví dụ: 6 = 1 + 2 + 3.

// Viết chương trình C cho phép nhập vào số n và kiểm tra xem n có phải là số hoàn hảo hay không.
// Nếu đúng in ra 1, sai in ra 0.

// INPUT
// 6
// OUTPUT
// 1

#include<stdio.h>
#include<math.h>

int isPerfectNumber(int n);

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", isPerfectNumber(n));
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