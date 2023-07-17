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