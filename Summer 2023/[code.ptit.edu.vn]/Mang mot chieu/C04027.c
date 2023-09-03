// SẮP XẾP CHỌN

// Hãy thực hiện thuật toán sắp xếp chọn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

// Input:
// Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).
// Output:
// Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

// Ví dụ:
// Input:
// 4
// 5 7 3 2
// Output:
// Buoc 1: 2 7 3 5
// Buoc 2: 2 3 7 5
// Buoc 3: 2 3 5 7

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
        printf("Buoc %d: ", i + 1);
        for(int j = 0; j < n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}