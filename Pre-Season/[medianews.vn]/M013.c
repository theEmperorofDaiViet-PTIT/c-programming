// LIỆT KÊ TẤT CẢ CÁC ƯỚC CỦA MỘT SỐ CHO TRƯỚC

// Viết chương trình C cho phép nhập vào một số n và in ra tất cả các ước số của n.
// (Mỗi ước được liệt kê cách nhau một khoảng trắng)

// INPUT
// 12
// OUTPUT
// 1 2 3 4 6 12

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            printf("%d ", i);
        }
    }
}