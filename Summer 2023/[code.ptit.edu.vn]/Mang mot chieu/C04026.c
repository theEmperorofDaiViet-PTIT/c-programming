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
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[i]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        printf("Buoc %d: ", i + 1);
        for(int j = 0; j < n; j++){
            printf("%d ", a[j]);
        }
        printf("\n");
    }
}