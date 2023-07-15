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
        while(j >= 0 && a[j] < temp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}