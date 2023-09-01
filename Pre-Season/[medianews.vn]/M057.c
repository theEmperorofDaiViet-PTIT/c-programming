// ĐẾM SỐ CHỮ SỐ CỦA MỘT SỐ BẤT KỲ

// Viết chương trình C cho phép nhập vào một số n và kiểm tra xem n có bao nhiêu chữ số.

// INPUT
// 1234
// OUTPUT
// 4

#include<stdio.h>
#include<string.h>

void main(){
    char s[1000];
    scanf("%s", &s);
    printf("%d", strlen(s));
}