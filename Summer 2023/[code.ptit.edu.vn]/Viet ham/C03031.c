// CẶP SỐ

// Cho hai cặp số (a,b) và (c,d). Hãy tính toán xem ước số chung lớn nhất của hai cặp số này có bằng nhau hay không.

// Input
// Dòng đầu ghi số bộ test
// Mỗi bộ test ghi số 4 số a, b, c, d. Các số không quá 109
// Output
// Với mỗi bộ test, ghi ra YES nếu 2 cặp số (a,b) và (c,d) có ước chung lớn nhất bằng nhau, ngược lại ghi ra NO trên một dòng.

// Ví dụ:
// Input:
// 2
// 2 4 4 8
// 3 5 7 9
// Output:
// NO
// YES

#include<stdio.h>

int gcd(int a, int b);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        (gcd(a, b) == gcd(c, d)) ? printf("YES\n") : printf("NO\n");
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