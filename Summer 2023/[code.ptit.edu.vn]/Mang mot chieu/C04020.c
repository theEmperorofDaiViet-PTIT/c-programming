// DỊCH TRÁI

// Viết chương trình nhập vào mảng A gồm n phần tử (1 < n < 100). 
// Thực hiện dịch n phần tử của mảng sang trái và In ra mảng kết quả.

// Input
// Dòng thứ nhất là số phần tử của mảng A.
// Dòng thứ hai là các phần tử của mảng A.
// Dòng thứ 3 là số lượng phần tử cần dịch trái.
// Các phần tử không vượt quá 1000.
// Output
// Ghi ra kết quả trên một dòng.

// Ví dụ:
// Input:
// 10
// 1 2 3 4 5 6 7 8 9 10
// 3
// Output:
// 4 5 6 7 8 9 10 1 2 3

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int k;
    scanf("%d", &k);
    for(int i = k; i < n; i++){
        printf("%d ", a[i]);
    }
    for(int i = 0; i < k; i++){
        printf("%d ", a[i]);
    }
}