// XUẤT HIỆN ĐÚNG MỘT LẦN

// Viết chương trình cho phép nhập vào mảng A có n phần tử số nguyên (2 < n < 100). 
// Đếm các phần tử chỉ xuất hiện một lần và liệt kê.

// Input
// Dòng thứ nhất là số phần tử của mảng A.
// Dòng thứ hai là các phần tử của mảng A.
// Output
// Dòng đầu tiên là số các phần tử thỏa mãn
// Dòng thứ hai là các phần tử thỏa mãn.

// Ví dụ:
// Input:
// 7
// 1 5 10 10 5 2 3
// Output:
// 3
// 1 2 3

#include<stdio.h>
#include<stdbool.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;
    bool ok[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        ok[i] = true;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i]){
                ok[i] = false;
                ok[j] = false;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(ok[i] == true){
            count++;
        }
    }
    printf("%d\n", count);
    for(int i = 0; i < n; i++){
        if(ok[i] == true){
            printf("%d ", a[i]);
        }
    }
}