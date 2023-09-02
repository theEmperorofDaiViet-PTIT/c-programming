// LOẠI BỎ HÀNG VÀ CỘT ĐẦU TIÊN RA KHỎI MA TRẬN

// Cho một ma trận cấp M*N chỉ bao gồm các số nguyên dương không quá 1000. 
// Hãy viết chương trình trước hết loại bỏ hàng đầu tiên sau đó loại bỏ cột đầu tiên ra khỏi ma trận.     

// Input: 
// Dòng đầu tiên ghi số bộ test. 
// Mỗi bộ test viết trên một dòng hai số N và M lần lượt là số hàng và số cột của ma trận (2<N,M<10). 
// Tiếp thep là N dòng ghi các số của ma trận.

// Output:
// Mỗi bộ test viết ra thứ tự bộ test, sau đó là ma trận sau khi xử lý.

// Ví dụ:
// Input:
// 1
// 3 3
// 1 2 4
// 3 4 0
// 6 3 5
// Output:
// Test 1:
// 4 0
// 3 5

#include<stdio.h>

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        printf("Test %d:\n", t);
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}