// TÌM SỐ LỚN NHẤT

// Cho luồng dữ liệu văn bản chỉ bao gồm các số nguyên dương không quá 18 chữ số. Hãy tìm và in ra giá trị số lớn nhất.
// Chú ý: bạn cần đọc đến hết luồng dữ liệu vào.

// Input
// Luồng văn bản với không quá 1 triệu số nguyên dương. Các số đều không quá 18 chữ số.
// Output
// Ghi ra số lớn nhất tìm được

// Ví dụ:
// Input:
// 23 545 64334 465 3
// 54 34 999 11111111111
// Output:
// 11111111111

#include<stdio.h>

void main(){
    long long arr[1000000];
    long long n;
    int length = 0;
    long long max = 0;
    while(scanf("%lld", &n) != EOF){
        arr[length] = n;
        length++;
        max = (n > max) ? n : max;
    }
    printf("%lld", max);
}