// LỚN NHẤT - NHỎ NHẤT

// Cho luồng dữ liệu vào gồm tối đa 10 triệu số nguyên dương, các số đều không quá 8 chữ số. Hãy in ra số lớn nhất và số nhỏ nhất

// Input
// Luồng dữ liệu vào chỉ bao gồm các số nguyên dương không quá 18 chữ số.
// Cần đọc đến hết luồng.
// Output
// Ghi số số lớn nhất, một khoảng trống, sau đó đến số nhỏ nhất.

// Ví dụ:
// Input:
// 323 545 5464354
// 3 4343 423 623
// 53523 24 23 23 2 52 9999
// Output:
// 5464354 2

#include<stdio.h>

void main(){
    long long arr[1000000];
    long long n;
    int length = 0;
    long long max = 0;
    long long min = 100000000;
    while(scanf("%lld", &n) != EOF){
        arr[length] = n;
        length++;
        max = (n > max) ? n : max;
        min = (n < min) ? n : min;
    }
    printf("%lld %lld", max, min);
}