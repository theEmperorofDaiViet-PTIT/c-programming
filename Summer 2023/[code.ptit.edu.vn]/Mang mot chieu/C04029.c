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