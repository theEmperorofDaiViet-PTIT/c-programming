// SẮP XẾP CHỌN - 2

// Viết chương trình C cho phép nhập vào mảng A gồm n phần tư (1 < n < 100). 
// Thực hiện sắp xếp tăng dần các phần tử của mảng theo thuật toán chọn và In ra.

// Trong đó:
// INPUT
// Hàng thứ nhất là số phần tử n của mảng A
// Hàng thứ hai là các phần tử của mảng A
// OUTPUT
// Kết quả các bước sắp xếp theo thuật toán

// Ví dụ:
// INPUT:
// 5
// 64 25 12 22 11
// OUTPUT:
// 11 25 12 22 64
// 11 12 25 22 64
// 11 12 22 25 64
// 11 12 22 25 64

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
}

void sort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int min = a[i];
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < min){
                min = a[j];
                minIndex = j;
            }
        }
        int tmp = a[i];
        a[i] = min;
        a[minIndex] = tmp;
        for(int j = 0; j < n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}