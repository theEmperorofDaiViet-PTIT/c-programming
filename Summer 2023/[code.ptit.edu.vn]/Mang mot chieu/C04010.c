// NHỎ NHẤT VÀ NHỎ THỨ HAI

// Viết chương trình nhập vào mảng A gồm n phần tử số nguyên (2 < n < 100). Tìm giá trị nhỏ nhất và nhỏ thứ hai và in ra.
// Dữ liệu vào đảm bảo luôn có ít nhất 2 số khác nhau.

// Input
// Dòng thứ nhất là số phần tử của mảng A.
// Dòng thứ hai là các phần tử của mảng A.
// Output
// Giá trị nhỏ nhất và giá trị nhỏ thứ hai

// Ví dụ:
// Input:
// 6
// 80 23 79 58 11 10
// Output:
// 10 11

#include<stdio.h>

void sort(int a[], int n);

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    sort(a, n);
    printf("%d ", a[0]);
    for(int i = 1; i < n; i++){
        if(a[i] > a[0]){
            printf("%d", a[i]);
            break;
        }
    }
}

void sort(int a[], int n){
    for(int i = 1; i < n; i++){
        int temp = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > temp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}