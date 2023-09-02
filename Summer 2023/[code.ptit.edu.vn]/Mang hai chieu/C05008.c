// LOẠI BỎ HÀNG VÀ CỘT CÓ TỔNG LỚN NHẤT RA KHỎI MA TRẬN

// Cho một ma trận cấp M*N chỉ bao gồm các số nguyên dương không quá 1000. 
// Hãy viết chương trình trước hết loại bỏ hàng có tổng lớn nhất sau đó tính toán lại để loại tiếp cột có tổng lớn nhất ra khỏi ma trận.     

// Input: 
// Dòng đầu tiên ghi số bộ test. 
// Mỗi bộ test viết trên một dòng hai số N và M lần lượt là số hàng và số cột của ma trận (2<N,M<10). 
// Tiếp thep là N dòng ghi các số của ma trận.
// Output:
// Mỗi bộ test viết ra thứ tự bộ test, sau đó là ma trận sau khi tính toán. 

// Ví dụ:
// Input:
// 1
// 3 3
// 1 2 4
// 3 4 0
// 6 3 5
// Output:
// Test 1:
// 1 4
// 3 0

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