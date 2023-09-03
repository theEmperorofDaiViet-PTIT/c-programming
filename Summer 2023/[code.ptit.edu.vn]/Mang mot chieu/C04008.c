// CHÈN MẢNG 2

// Nhập 2 mảng (a, N) và (b, M) và số nguyên p (0 ≤ p < M <= N < 100). Hãy chèn mảng b vào vị trí p của mảng a.
// Input: 
// Dòng đầu ghi số bộ test, mỗi bộ test gồm 3 dòng: 
// Dòng đầu ghi 3 số N, M, p. 
// Dòng thứ 2 ghi N số của mảng a.  
// Dòng thứ 3 ghi M số của mảng b.

// Output: ghi ra thứ tự bộ test, rồi xuống dòng và dãy số kết quả sau khi chèn.

// Ví dụ:
// Input:
// 1
// 4 3 1
// 5 3 6 7
// 2 9 11
// Output:
// Test 1:
// 5 2 9 11 3 6 7

#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    for(int testIndex = 1; testIndex <= t; testIndex++){
        int n, m, p;
        scanf("%d %d %d", &n, &m, &p);
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < m; i++){
            scanf("%d", &b[i]);
        }
        printf("Test %d:\n", testIndex);
        for(int i = 0; i < p; i++){
            printf("%d ", a[i]);
        }
        for(int i = 0; i < m; i++){
            printf("%d ", b[i]);
        }
        for(int i = p; i < n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}