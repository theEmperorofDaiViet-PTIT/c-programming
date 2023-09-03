// CHÈN MẢNG 1

// Viết chương trình nhập vào mảng A một chiều n phần tử (1 < n < 100) và mảng B một chiều m phần tử (1 < m < 100). Thực hiện chèn mảng B vào mảng A tại vị trí P và in ra mảng kết quả.

// Input
// Dòng thứ nhất là số phần tử của mảng A và mảng B
// Dòng thứ hai là các phần tử của mảng A
// Dòng thứ ba là các phần tử của mảng B
// Dòng thứ tư là vị trí chèn
// Các phần tử không vượt quá 1000. Vị trí cần chèn đảm bảo nằm trong mảng A.
// Output
// Ghi ra dãy kết quả trên một dòng.

// Ví dụ:
// Input:
// 5 3
// 1 2 3 4 5
// 6 7 8
// 3
// Output:
// 1 2 3 6 7 8 4 5

#include<stdio.h>

void main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n];
    for(int i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    int index;
    scanf("%d", &index);
    for(int i = 0; i < index; i++){
        printf("%d ", a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
    for(int i = index; i < m; i++){
        printf("%d ", a[i]);
    }
}