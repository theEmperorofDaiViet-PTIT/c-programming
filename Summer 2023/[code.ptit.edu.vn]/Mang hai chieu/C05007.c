// CHUYỂN ĐỔI HAI CỘT TRONG MA TRẬN

// Viết chương trình nhập vào ma trận nguyên dương cấp M*N (không quá 50). 
// Chuyển đổi hai cột a và b trong ma trận và in ra kết quả.

// INPUT
// - Hàng thứ nhất là cấp m,n của ma trận
// - m hàng tiếp theo là các phần tử của ma trận
// - Hàng cuối cùng là vị trí cột cần chuyển đổi
// OUTPUT
// - Ma trận kết quả

// Ví dụ:
// INPUT
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// 1 3
// OUTPUT
// 3 2 1
// 6 5 4
// 9 8 7

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
        for(int j = 0; j < n; j++){
            int k = 0;
            k = (j == a) ? b : ((j == b) ? a : j);
            printf("%d ", A[i][k]);
        }
        printf("\n");
    }    
}