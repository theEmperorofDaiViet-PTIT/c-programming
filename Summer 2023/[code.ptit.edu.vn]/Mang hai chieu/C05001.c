// MA TRẬN CHUYỂN VỊ

// Viết chương trình nhập một ma trận số nguyên dương cỡ M*N với 2<N,M<10, các số không quá 100. Hãy in ra chuyển vị của ma trận đó.

// Dữ liệu vào
// Mỗi bộ test viết trên một dòng hai số N và M lần lượt là số hàng và số cột của ma trận (2<N,M<10). 
// Tiếp thep là N dòng ghi các số của ma trận.
// Kết quả
// In ra ma trận chuyển vị tương ứng.

// Ví dụ:
// Input:
// 2 3
// 1 2 4
// 3 4 0
// Output:
// 1 3
// 2 4
// 4 0

#include<stdio.h>

void main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}