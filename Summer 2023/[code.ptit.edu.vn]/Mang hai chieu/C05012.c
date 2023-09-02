// TÍCH MA TRẬN CHÉO

// Cho một số nguyên dương N không quá 20. Ma trận vuông A cấp N*N được tạo theo mẫu trong bảng dưới. 
// Viết chương trình tính tích của A với chuyển vị của A.

// Với N = 4
// 1 0 0 0
// 1 2 0 0
// 1 2 3 0
// 1 2 3 4

// Với N = 5
// 1 0 0 0 0
// 1 2 0 0 0
// 1 2 3 0 0
// 1 2 3 4 0
// 1 2 3 4 5

// Input: 
// Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng số N (1<N<20).
// Output:
// Ghi thứ tự bộ test, sau đó là N hàng ghi ma trận kết quả. Tiếp theo là một dòng trống.

// Ví dụ:
// Input:
// 1
// 4
// Output:
// Test 1:
// 1 1 1 1
// 1 5 5 5
// 1 5 14 14
// 1 5 14 30

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