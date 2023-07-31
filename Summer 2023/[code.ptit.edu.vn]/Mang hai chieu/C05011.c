#include<stdio.h>

void transpose(int n, int m, int a[n][m], int b[m][n]);
void multiplyTwoMatrices(int n, int m, int a[n][m], int b[m][n], int res[n][n]);

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        printf("Test %d:\n", t);
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n][m], b[m][n], res[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        transpose(n, m, a, b);
        multiplyTwoMatrices(n, m, a, b, res);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
}

void transpose(int n, int m, int a[n][m], int b[m][n]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }
    }    
}

void multiplyTwoMatrices(int n, int m, int a[n][m], int b[m][n], int res[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = 0;
            for(int k = 0; k < m; k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}