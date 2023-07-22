#include<stdio.h>

void sort(int n, int m, int a[n][m], int k);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        k--;
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        sort(n, m, a, k);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

    }
}

void sort(int n, int m, int a[n][m], int k){
    for(int i = 1; i < n; i++){
        int tmp = a[i][k];
        int j = i - 1;
        while(j >= 0 && a[j][k] > tmp){
            a[j + 1][k] = a[j][k];
            j--;
        }
        a[j + 1][k] = tmp;
    }
}