// MA TRẬN XOẮN ỐC 2

// Cho ma trận A[N][M]. Nhiệm vụ của bạn là in các phần tử của ma trận theo hình xoắn ốc. 
// Ví dụ về in ma trận theo hình xoắn ốc như dưới đây: 1  2  3  4  8  12  16  15  14  13  9  5  6  7  11  10 .

// 1      2     3     4
// 5      6     7     8
// 9     10    11    12
// 13    14    15    16

// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng:
// dòng đầu tiên đưa vào N, M là cấp của ma trận A[][];
// dòng tiếp theo đưa vào N×M số A[i][j].
// T, M, N, A[i][j] thỏa mãn ràng buộc: 1 ≤ T ≤ 100; 1 ≤ M, N ≤ 100; 1 ≤ A[i][j] ≤ 105.
// Output: 
// Đưa ra kết quả mỗi test theo từng dòng.

// Ví dụ:
// Input:
// 2
// 4 4
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
// 3 4
// 1 2 3 4 5 6 7 8 9 10 11 12
// Output:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// 1 2 3 4 8 12 11 10 9 5 6 7

#include<stdio.h>

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        int i = 0, j = 0, k = 0;
        char direction = 'R';
        int maxI = n, minI = 0, maxJ = m, minJ = 0;
        while(k < n * m){
            printf("%d ", a[i][j]);
            k++;
            if(i < maxI - 1 && j == maxJ - 1 && direction == 'R'){
                direction = 'D';
            }
            else if(i == maxI - 1 && j == maxJ - 1 && direction == 'D'){
                direction = 'L';
            }
            else if(i == maxI - 1 && j == minJ && direction == 'L'){
                direction = 'U';
            }
            else if(i == minI + 1 && j == minJ && direction == 'U'){
                direction = 'R';
                minI++;
                minJ++;
                maxI--;
                maxJ--;
            }
            switch (direction){
                case 'R':
                    j++;
                    break;
                
                case 'D':
                    i++;
                    break;
                case 'L':
                    j--;
                    break;
                case 'U':
                    i--;
                    break;
            }
        }
        printf("\n");
    }
}