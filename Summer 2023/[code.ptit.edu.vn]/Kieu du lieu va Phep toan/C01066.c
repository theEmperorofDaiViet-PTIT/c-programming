// GIÁ TRỊ NHỎ NHẤT TRONG BA SỐ

// Viết chương trình nhập vào ba số nguyên có trị tuyệt đối không quá 6 chữ số. Tìm giá trị nhỏ nhất trong ba số đó.

// Input
// Chỉ có một dòng ghi ba số a,b,c cách nhau một khoảng trống. Cả ba số không quá 6 chữ số.
// Output
// Ghi ra số nhỏ nhất.

// Ví dụ:
// Input:
// 10 20 30
// Output:
// 10

#include<stdio.h>

void sort(int a[], int n);

void main(){
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a, 3);
    printf("%d", a[0]);
}

void sort(int a[], int n){
    for(int i = 1; i < n; i++){
        int temp = a[i];
        int j = i - 1;
        while(j >= 0 && temp < a[j]){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}