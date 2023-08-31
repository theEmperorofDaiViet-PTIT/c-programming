// TÌM GIÁ TRỊ LỚN NHẤT TRONG BA SỐ

// Viết chương trình C cho phép nhập vào ba số và tìm giá trị lớn nhất trong ba số đó.

// INPUT
// 10 20 30
// OUTPUT
// 30

#include<stdio.h>

void sort(int a[], int n);

void main(){
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a, 3);
    printf("%d", a[2]);
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