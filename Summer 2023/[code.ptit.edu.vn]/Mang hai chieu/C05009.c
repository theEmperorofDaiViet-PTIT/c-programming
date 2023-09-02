// CHUYỂN ĐỔI HAI ĐƯỜNG CHÉO

// Viết chương trình nhập vào ma trận vuông các số nguyên dương cấp M (không quá 50). 
// Thực hiện chuyển đổi hai đường chéo của ma trận và in ra ma trận kết quả.

// INPUT
// - Hàng thứ nhất là cấp m của ma trận
// - m hàng tiếp theo là các phần tử của ma trận
// OUTPUT
// - Ma trận kết quả

// Ví dụ:
// INPUT
// 3
// 1 2 3
// 4 5 6
// 7 8 9
// OUTPUT
// 3 2 1
// 4 5 6
// 9 8 7

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                printf("%d ", a[i][n - 1 - i]);
            }
            else if(i == n - 1 - j){
                printf("%d ", a[i][i]);
            }
            else{
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

}