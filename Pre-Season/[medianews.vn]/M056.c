// TÌM MŨ CỦA HAI SỐ NGUYÊN SỬ DỤNG HÀM POW

// Viết chương trình C cho phép nhập vào hai số x và y và tìm mũ của chúng sử dụng hàm pow (thư viện math.h)

// INPUT
// 5 2
// OUTPUT
// 25

#include<stdio.h>
#include<math.h>

void main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", (int) pow(x, y));
}