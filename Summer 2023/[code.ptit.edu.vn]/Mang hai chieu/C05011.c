// TÍCH MA TRẬN VỚI CHUYỂN VỊ CỦA NÓ

// Cho ma trận A chỉ gồm các số nguyên dương cấp N*M. Hãy viết chương trình tính tích của A với ma trận chuyển vị của A.    

// Input: 
// Dòng đầu tiên ghi số bộ test. 
// Với mỗi bộ test: 
// Dòng đầu tiên ghi hai số n và m là bậc của ma trận a; 
// n dòng tiếp theo, mỗi dòng ghi m số của một dòng trong ma trận A.
// Output:
// Với mỗi bộ test ghi ra thứ tự bộ test, sau đó đến ma trận tích tương ứng, mỗi số cách nhau đúng một khoảng trống.

// Ví dụ:
// Input:
// 1
// 2  2
// 1  2
// 3  4
// Output:
// Test 1:
// 5 11
// 11 25

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