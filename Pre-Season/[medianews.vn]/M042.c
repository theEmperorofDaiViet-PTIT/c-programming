// LIỆT KÊ CÁC SỐ NGUYÊN TỐ CÓ TỔNG CÁC CHỮ SỐ CHIA HẾT CHO 5

// Viết chương trình C cho phép nhập vào n. Thực hiện liệt kê các số nguyên tố
// nhỏ hơn n và thỏa mãn có tổng các chữ số chia hết cho 5. Có bao nhiêu số như vậy

// INPUT
// 100
// OUTPUT
// 5 19 23 37 41 73
// 6

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);
bool check(int n);

void main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 3; i < n; i += 2){
        if(check(i)){
            count++;
            printf("%d ", i);
        }
    }
    printf("\n%d", count);
}

bool check(int n){
    int sum = 0;
    int tmp = n;
    while(tmp > 0){
        sum += (tmp % 10);
        tmp /= 10;
    }
    return sum % 5 == 0 && isPrime(n);
}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    else if(n % 2 == 0){
        if(n == 2)  return true;
        else    return false;
    }
    else{
        for(int i = 3; i <= sqrt(n); i += 2){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}