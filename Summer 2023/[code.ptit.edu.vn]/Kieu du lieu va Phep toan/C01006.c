// PHÉP TOÁN CƠ BẢN 1

// Nhập 2 số nguyên dương a, b không quá 1000.
// Hãy in ra lần lượt các giá trị: tổng, hiệu, tích, chia kết quả thực (với đúng 2 chữ số sau dấu phẩy) và chia phần dư của 2 số a, b đã cho.
// Kết quả tính toán ghi trên một dòng. Nếu b = 0 thì không thực hiện phép toán nào mà chỉ in ra số 0.

// Input
// Chỉ có 2 số a, b trên một dòng.
// Output
// Ghi ra lần lượt kết quả các phép toán trên một dòng.

// Ví dụ:
// Input:
// 10 5
// Output:
// 15 5 50 2.00 0

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b == 0){
        printf("%d", 0);
    }
    else{
        printf("%d %d %d %.2f %d", a + b, a - b, a * b, (double) a / b, a % b);
    }
}