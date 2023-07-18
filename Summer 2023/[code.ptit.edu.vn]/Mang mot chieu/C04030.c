#include<stdio.h>
#include<stdbool.h>

void sort(int a[], int n, bool reverse);

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &b[i]);
        }
        sort(a, n, false);
        sort(b, n, true);
        printf("Test %d:\n", t);
        for(int i = 0; i < n; i++){
            printf("%d %d ", a[i], b[i]);
        }
        printf("\n");
    }
}

void sort(int a[], int n, bool reverse){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int tmp = a[i];
        if(reverse == false){
            while(j >= 0 && a[j] > tmp){
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = tmp;
        }
        else{
            while(j >= 0 && a[j] < tmp){
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = tmp; 
        }
    }
}