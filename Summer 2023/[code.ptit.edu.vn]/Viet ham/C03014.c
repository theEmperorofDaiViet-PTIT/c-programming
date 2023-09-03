// BỘI SỐ CHUNG - ƯỚC SỐ CHUNG

// Tìm bội số chung nhỏ nhất và ước số chung lớn nhất của hai số nguyên dương a, b.

// Input:  
// Dòng đầu tiên đưa vào T là số lượng bộ test.
// T dòng tiếp theo mỗi dòng có một cặp số a, b.
// T, a, b thỏa mãn ràng buộc: 1 ≤ T ≤ 100; 1 ≤ a, b ≤ 10^8;
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.

// Ví dụ:
// Input:
// 2
// 5 10
// 14 8
// Output:
// 10 5
// 56 2

#include<stdio.h>

long gcd(long a, long b);
long lcm(long a, long b);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long a, b;
        scanf("%ld %ld", &a, &b);
        printf("%ld %ld\n", lcm(a, b), gcd(a, b));
    }
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