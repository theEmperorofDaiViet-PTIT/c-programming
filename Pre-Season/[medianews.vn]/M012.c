// TÌM TÍCH CỦA CÁC CHỮ SỐ CỦA MỘT SỐ

// Viết chương trình C cho phép nhập vào một số n, thực hiện tìm tích của các chữ số của n và in ra màn hình.

// INPUT
// 1234
// OUTPUT
// 24

#include<stdio.h>
#include<string.h>

void main(){
    char s[1000];
    scanf("%s", &s);
    long long product = 1;
    for(int i = 0; i < strlen(s); i++){
        product *= (s[i] - 48);
    }
    printf("%lld", product);
}