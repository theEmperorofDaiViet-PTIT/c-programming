// TÁCH CHẴN LẺ

// Viết chương trình nhập vào mảng A gồm n phần tử (1 < n < 100). Các giá trị trong dãy không quá 1000. 
// Thực hiện tách mảng đã cho thành mảng các số chẵn và mảng các số lẻ.

// Input
// Dòng thứ nhất là số phần tử của mảng A.
// Dòng thứ hai là các phần tử của mảng A
// Các phần tử không vượt quá 1000.
// Output
// Dòng thứ nhất là mảng các số chẵn
// Dòng thứ hai là mảng các số lẻ.

// Ví dụ:
// Input:
// 5
// 1 2 3 4 5
// Output:
// 2 4
// 1 3 5

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            printf("%d ", a[i]);
        }
    }
    printf("\n");
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 1){
            printf("%d ", a[i]);
        }
    }
}