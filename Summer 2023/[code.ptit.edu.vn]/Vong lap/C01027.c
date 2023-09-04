// ƯỚC SỐ CHUNG LỚN NHẤT

// Viết chương trình tính ước số chung lớn nhất của 2 số nguyên dương (không quá 6 chữ số).

// Input
// Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng hai số nguyên dương.
// Output
// Mỗi bộ test ghi ra kết quả tính được trên một dòng.

// Ví dụ:
// Input:
// 2
// 24 14
// 75 125
// Output:
// 2
// 25

#include<stdio.h>

int gcd(int a, int b);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
}

int gcd(int a, int b){
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else  
        return gcd(a, b - a);
}