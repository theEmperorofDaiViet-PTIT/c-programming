// SẮP XẾP CHÈN

// Hãy thực hiện thuật toán sắp xếp chèn trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

// Input: 
// Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).
// Output:
// Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

// Ví dụ:
// Input:
// 4
// 5 7 3 2
// Output:
// Buoc 0: 5
// Buoc 1: 5 7
// Buoc 2: 3 5 7
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
    printf("Buoc 0: %d\n", a[0]);
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int tmp = a[i];
        while(j >= 0 && a[j] > tmp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
        printf("Buoc %d: ", i);
        for(int j = 0; j <= i; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}