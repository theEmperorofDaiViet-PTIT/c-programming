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