// KIỂM TRA MỘT SỐ CÓ PHẢI LÀ SỐ NGUYÊN TỐ

// Viết chương trình C cho phép nhập vào 1 số và kiểm tra xem số đó có phải là số nguyên tố hay không.
// Nếu đúng in ra 1, sai in ra 0.

// INPUT
// 11
// OUTPUT
// 1

#include<stdio.h>
#include<math.h>

int isPrime(int n);

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", isPrime(n));
}

int isPrime(int n){
    if(n < 2){
        return 0;
    }
    else if(n % 2 == 0){
        if(n == 2)  return 1;
        else    return 0;
    }
    else{
        for(int i = 3; i <= sqrt(n); i += 2){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }
}