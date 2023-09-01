// KIỂM TRA MỘT SỐ CÓ PHẢI LÀ SỐ ARMSTRONG HAY KHÔNG

// Số armstrong là số A có n chữ số và thỏa mãn tổng của lũy thừa bậc n của từng chữ số trong A bằng chính nó.
// Ví dụ: 371 = 3^3 + 7^3 + 1^3

// Viết chương trình C kiểm tra một số xem có phải là số armstrong hay không.
// Nếu đúng in ra 1, sai in ra 0.

// INPUT
// 371
// OUTPUT
// 1

#include<stdio.h>
#include<math.h>
#include<string.h>

int isArmstrongNumber(int n);

void main(){
    int n;
    scanf("%d", &n);
    printf("%d", isArmstrongNumber(n));
}

int isArmstrongNumber(int n){
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