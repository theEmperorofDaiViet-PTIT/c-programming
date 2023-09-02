// SẮP XẾP CỘT TRONG MA TRẬN

// Cho ma trận A có kích thước N*M chỉ bao gồm các số nguyên có giá trị tuyệt đối không quá 10000.
// Hãy sắp xếp cột thứ i của ma trận theo thứ tự từ nhỏ đến lớn và in kết quả ra màn hình.
// Chú ý: thứ tự cột sẽ tính từ 1 đến M

// Input
// Dòng đầu ghi số bộ test (không quá 20).
// Mỗi bộ test viết trên 2 dòng:
//     - Dòng đầu ghi 3 số N, M, i
//     - Dòng thứ 2 ghi các số trong ma trận lần lượt từ hàng 1 đến hàng N. Các số cách nhau một khoảng trống
// Các ràng buộc: 2 ≤ N, M ≤ 100; 1 ≤ i ≤ M; 0 ≤ ∣A[i,j] ∣ ≤ 10000)

// Output
// Với mỗi bộ test, ghi ra N dòng của ma trận đã sắp xếp.

// Ví dụ:
// Input:
// 1
// 2 2 1
// 90 49 85 88
// Output:
// 85 49
// 90 88

#include<stdio.h>

void sort(int n, int m, int a[n][m], int k);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);
        k--;
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        sort(n, m, a, k);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

    }
}

void sort(int n, int m, int a[n][m], int k){
    for(int i = 1; i < n; i++){
        int tmp = a[i][k];
        int j = i - 1;
        while(j >= 0 && a[j][k] > tmp){
            a[j + 1][k] = a[j][k];
            j--;
        }
        a[j + 1][k] = tmp;
    }
}