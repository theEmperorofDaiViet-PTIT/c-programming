#include<stdio.h>

void transpose(int n, int m, int a[n][m], int b[m][n]);
void multiplyTwoMatrices(int n, int m, int a[n][m], int b[m][n], int res[n][n]);

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        printf("Test %d:\n", t);
        int n;
        scanf("%d", &n);
        int a[n][n], b[n][n], res[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = (i >= j) ? j + 1 : 0;
            }
        }
        transpose(n, n, a, b);
        multiplyTwoMatrices(n, n, a, b, res);
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