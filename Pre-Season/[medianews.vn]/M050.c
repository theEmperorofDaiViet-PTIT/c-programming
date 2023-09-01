// KIỂM TRA MỘT SỐ CÓ CHIA HẾT CHO HAI SỐ KHÁC HAY KHÔNG

// Viết chương trình C cho phép nhập vào 3 số a, b, c. Thực hiện kiểm tra a có chia hết cho b và c hay không.
// Nếu a chia hết cho b và c thì in ra 1, ngược lại in ra 0.

// INPUT
// 15 3 5
// OUTPUT
// 1

#include<stdio.h>

void main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    (a % b == 0 && a % c == 0) ? printf("1") : printf("0");
}