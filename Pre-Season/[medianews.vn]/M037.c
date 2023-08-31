// LIỆT KÊ CÁC SỐ HOÀN HẢO NẰM TRONG KHOẢNG A,B

// Viết chương trình C cho phép nhập vào hai số a và b (a có thể lớn hơn b).
// Thực hiện liệt kê các số hoàn hảo nằm trong khoảng a và b.

// INPUT
// 1 1000
// OUTPUT
// 6 28 496

#include<stdio.h>
#include<math.h>

int isPerfectNumber(int n);

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int tmp = a;
    a = (a < b) ? a : b;
    b = (tmp < b) ? b : tmp;
    for(int i = a; i <= b; i++){
        if(isPerfectNumber(i)){
            printf("%d ", i);
        }
    }
}

int isPerfectNumber(int n){
    if(n <= 1){
        return 0;
    }
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