// LIỆT KÊ CÁC SỐ ARMSTRONG NHỎ HƠN N

// Viết chương trình C cho phép nhập vào n và thực hiện liệt kê các số armstrong nhỏ hơn n.
// (Mỗi kết quả thỏa mãn cách nhau một khoảng trắng)

// INPUT
// 1000
// OUTPUT
// 1 2 3 4 5 6 7 8 9 153 370 371 407

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

bool isArmstrongNumber(int n);

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i < n; i++){
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