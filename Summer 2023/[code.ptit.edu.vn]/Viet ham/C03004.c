// ƯỚC SỐ CHUNG LỚN NHẤT – BỘI SỐ CHUNG NHỎ NHẤT

// Viết chương trình tìm ước số chung lớn nhất và bội số chung nhỏ nhất của hai số nguyên dương a, b.

// Input
// Dữ liệu vào chỉ có 2 số nguyên dương a và b không quá 9 chữ số.
// Ouput
// Kết quả ghi trên 2 dòng, dòng đầu là USCLN, dòng thứ 2 là BSCNN.

// Ví dụ:
// Input:
// 2 5
// Output:
// 1
// 10

#include<stdio.h>

long gcd(long a, long b);
long lcm(long a, long b);

void main(){
    long a, b;
    scanf("%ld %ld", &a, &b);
    printf("%ld\n%ld", gcd(a, b), lcm(a, b));
}

long gcd(long a, long b){
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else  
        return gcd(a, b - a);
}

long lcm(long a, long b){
    return a * b / gcd(a, b);
}