#include<stdio.h>

void multiplyTwoMatrices(int m, int n, int p, int a[m][n], int b[n][p], int res[m][p]);

void main(){
    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);
    int a[m][n], b[n][p], c[p][q];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < p; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            scanf("%d", &c[i][j]);
        }
    }

    int res1[m][p], res2[m][q];
    multiplyTwoMatrices(m, n, p, a, b, res1);
    multiplyTwoMatrices(m, p, q, res1, c, res2);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            printf("%d ", res2[i][j]);
        }
        printf("\n");
    }
    
}

void multiplyTwoMatrices(int m, int n, int p, int a[m][n], int b[n][p], int res[m][p]){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            res[i][j] = 0;
            for(int k = 0; k < n; k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}