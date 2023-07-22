#include<stdio.h>

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        printf("Test %d:\n", t);
        int m, n;
        scanf("%d %d", &m, &n);
        int A[m][n];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &A[i][j]);
            }
        }
        int row[m], column[n];
        int maxRow = 0, maxColumn = 0;
        for(int i = 0; i < m; i++){
            row[i] = 0;
            for(int j = 0; j < n; j++){
                row[i] += A[i][j];
            }
        }
        for(int i = 1; i < m; i++){
            if(row[i] > row[maxRow]){
                maxRow = i;
            }
        }
        for(int j = 0; j < n; j++){
            column[j] = 0;
            for(int i = 0; i < m; i++){
                if(i != maxRow){
                    column[j] += A[i][j];
                }
            }
        }
        for(int i = 1; i < n; i++){
            if(column[i] > column[maxColumn]){
                maxColumn = i;
            }
        }
        for(int i = 0; i < m; i++){
            if(i == maxRow) continue;
            for(int j = 0; j < n; j++){
                if(j == maxColumn) continue;
                printf("%d ", A[i][j]);
            }
            printf("\n");
        }
    }
}