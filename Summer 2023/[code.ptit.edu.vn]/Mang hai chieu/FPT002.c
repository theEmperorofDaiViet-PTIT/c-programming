// NHÂN 3 MA TRẬN GIÁ TRỊ NGUYÊN

// Viết chương trình nhân ba ma trận A(mxn) với B(nxp) và C(pxq) để được D=AxBxC

// In:
// Hàng đầu là các giá trị m, n, p và q (các giá trị cách nhau bởi dấu cách)
// m hàng tiết theo là các phần tử của ma trận A
// n hàng tiếp theo là các phần tử của ma trận B
// p hàng tiếp theo là các phần tử của ma trận C
// Out:
// Ma trận kết quả D

// Ví dụ:
// Input:
// 4    3    2    2
// 2    5    4    
// 4    1    9    
// 3    5    2    
// 3    9    3    
// 5    7    
// 3    7    
// 2    4    
// 7    7    
// 5    4
// Out:
// 556    491    
// 642    571    
// 558    494    
// 816    720

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