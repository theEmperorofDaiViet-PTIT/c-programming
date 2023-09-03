// SẮP XẾP TĂNG

// Viết chương trình nhập vào mảng A gồm n phần tử (1 < n < 100). 
// Thực hiện sắp xếp tăng dần các phần tử của mảng và in ra màn hình.

// Input
// Dòng thứ nhất là số phần tử của mảng A.
// Dòng thứ hai là các phần tử của mảng A.
// Các phần tử không vượt quá 1000.
// Output
// Ghi ra kết quả trên một dòng.

// Ví dụ:
// Input:
// 8
// 1 3 8 2 9 7 6 5
// Output:
// 1 2 3 5 6 7 8 9

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
        printf("%d ", a[i]);
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