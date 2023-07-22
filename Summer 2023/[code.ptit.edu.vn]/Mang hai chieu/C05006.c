#include<stdio.h>

void main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int A[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }
    int a, b;
    scanf("%d %d", &a, &b);
    a--;
    b--;
    for(int i = 0; i < m; i++){
        int k = 0;
        k = (i == a) ? b : ((i == b) ? a : i);
        for(int j = 0; j < n; j++){
            printf("%d ", A[k][j]);
        }
        printf("\n");
    }    
}