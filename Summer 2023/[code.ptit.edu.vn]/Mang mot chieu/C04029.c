// SẮP XẾP NỔI BỌT

// Hãy thực hiện thuật toán sắp xếp nổi bọt trên dãy N số nguyên. Ghi ra các bước thực hiện thuật toán.

// Input: 
// Dòng 1 ghi số N (không quá 100). Dòng 2 ghi N số nguyên dương (không quá 100).

// Output:
// Ghi ra màn hình từng bước thực hiện thuật toán. Mỗi bước trên một dòng, các số trong dãy cách nhau đúng một khoảng trống.

// Ví dụ:
// Input:
// 4
// 5 3 2 7
// Output:
// Buoc 1: 3 2 5 7
// Buoc 2: 2 3 5 7

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
        int count = 0;
        for(int j = 1; j < n - i; j++){
            if(a[j] < a[j - 1]){
                int tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;
                count++;
            }
        }
        if(count == 0)
            break;
        printf("Buoc %d: ", i + 1);
        for(int j = 0; j < n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");

    }
}