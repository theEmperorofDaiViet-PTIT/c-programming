// LIỆT KÊ CÁC CẶP SỐ NGUYÊN TỐ CÙNG NHAU

// Viết chương trình nhập hai số nguyên dương a,b thỏa mãn 2 < a < b < 100.
// Một cặp số (i,j) được gọi là nguyên tố cùng nhau nếu i ≠ j và ước số chung lớn nhất của i với j là 1
// Hãy liệt kê các cặp số nguyên tố cùng nhau trong đoạn [a,b] theo thứ tự từ nhỏ đến lớn.

// Input
// Chỉ có một dòng ghi hai số a, b
// Output
// Các cặp số i, j thỏa mãn được viết lần lượt trên từng dòng theo định dạng (i,j), theo thứ tự từ điển.

// Ví dụ:
// Input:
// 5 8
// Output:
// (5,6)
// (5,7)
// (5,8)
// (6,7)
// (7,8)

#include<stdio.h>

long gcd(long a, long b);

void main(){
    long a, b;
    scanf("%ld %ld", &a, &b);
    for(int i = a; i < b; i++){
        for(int j = i + 1; j <= b; j++){
            if(gcd(i, j) == 1){
                printf("(%d,%d)\n", i, j);
            }
        }
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