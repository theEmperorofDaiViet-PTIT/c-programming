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