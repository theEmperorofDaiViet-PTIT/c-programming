// LIỆT KÊ CÁC SỐ ARMSTRONG NẰM TRONG KHOẢNG A,B

// Viết chương trình C cho phép nhập vào hai số a,b. Thực hiện liệt kê các số arstrong nằm trong khoảng a và b.

// INPUT
// 100 1000
// OUTPUT
// 153 370 371 407

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

bool isArmstrongNumber(int n);

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        if(isArmstrongNumber(i)){
            printf("%d ", i);
        }
    }
}

bool isArmstrongNumber(int n){
    int length = 0;
    int tmp1 = n, tmp2 = n;
    while(tmp1 > 0){
        length++;
        tmp1 /= 10;
    }
    int res = 0;
    while(tmp2 > 0){
        res += (int) pow((tmp2 % 10), length);
        tmp2 /= 10;
    }
    return n == res;
}