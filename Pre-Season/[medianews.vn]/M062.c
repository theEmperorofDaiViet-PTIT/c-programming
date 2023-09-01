// TÍNH DIỆN TÍCH VÀ CHU VI CỦA HÌNH CHỮ NHẬT

// Viết chương trình C cho phép nhập vào chiều dài và chiều rộng của hình chữ nhật.
// Thực hiện tính chu vi, diện tích và in ra màn hình.

// Lưu ý nếu người dùng nhập chiều dài hoặc chiều rộng nhỏ hơn hoặc bằng 0 thì in ra màn hình số 0

// INPUT
// 2 10
// OUTPUT
// 24 20

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a <= 0 || b <= 0){
        printf("0");
    }
    else{
        printf("%d %d", 2 * (a + b), a * b);
    }
}