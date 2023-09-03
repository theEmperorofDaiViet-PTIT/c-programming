// SỐ CẶP BẰNG NHAU TRONG DÃY

// Viết chương trình đếm các cặp số bằng nhau liên tiếp trong dãy số nguyên.

// Input: 
// Dòng đầu tiên ghi số bộ test. 
// Mỗi bộ test có hai dòng:
// Dòng đầu ghi số phần tử của dãy, không quá 30
// Dòng tiếp theo ghi các phần tử của dãy, mỗi phần tử cách nhau một khoảng trống. Các phần tử không quá 100.
// Output: 
// Mỗi bộ test viết ra trên một dòng giá trị tổng chữ số tương ứng

// Ví dụ:
// Input:
// 2
// 4
// 1  3  3  4
// 12
// 1  2  3  3  3  3  4  4  5  5  5  1
// Output:
// 1
// 6

#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int count = 0;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i - 1]){
                count++;
            }
        }
        printf("%d\n", count);
    }
}