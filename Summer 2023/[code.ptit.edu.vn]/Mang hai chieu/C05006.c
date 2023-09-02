// CHUYỂN ĐỔI HAI HÀNG TRONG MA TRẬN

// Viết chương trình  nhập vào ma trận nguyên dương cấp M*N (không quá 50). 
// Chuyển đổi hai hàng a và b trong ma trận và in ra kết quả.

// INPUT
// - Hàng thứ nhất là cấp m,n của ma trận
// - m hàng tiếp theo là các phần tử của ma trận
// - Hàng cuối cùng là giá trị a,b. Là các hàng cần chuyển đổi
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
// 7 8 9
// 4 5 6
// 1 2 3

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