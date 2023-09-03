// LOẠI BỎ TRÙNG NHAU

// Viết chương trình nhập vào mảng A gồm n phần tử số nguyên (2 < n < 100). 
// Thực hiện loại bỏ các phần tử đã xuất hiện và In ra mảng kết quả.

// Input
// Dòng thứ nhất là số phần tử của mảng A.
// Dòng thứ hai là các phần tử của mảng A.
// Output
// Ghi ra kết quả trên một dòng

// Ví dụ:
// Input:
// 7
// 1 5 10 10 5 2 3
// Output:
// 1 5 10 2 3

#include<stdio.h>
#include<stdbool.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    bool checked[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        checked[i] = false;
    }

    for(int i = 0; i < n; i++){
        if(checked[i] == true){
            continue;
        }
        printf("%d ", a[i]);
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i]){
                checked[i] = true;
                checked[j] = true;
            }
        }
    }

}