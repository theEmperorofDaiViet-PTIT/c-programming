// LIỆT KÊ PHẦN TỬ XUẤT HIỆN NHIỀU HƠN 1 LẦN

// Viết chương trình nhập vào mảng A gồm n phần tử số nguyên (2 < n < 100). 
// Đếm các phần tử xuất hiện nhiều hơn một lần và liệt kê các số đó.

// Input
// Dòng thứ nhất là số phần tử của mảng A.
// Dòng thứ hai là các phần tử của mảng A.
// Output
// Dòng đầu tiên là số các phần tử thỏa mãn
// Dòng thứ hai là các phần tử thõa mãn

// Ví dụ:
// Input:
// 7
// 1 5 10 10 5 2 3
// Output:
// 2
// 5 10

#include<stdio.h>
#include<stdbool.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n], count[n];
    bool checked[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        count[i] = 0;
        checked[i] = false;
    }

    for(int i = 0; i < n; i++){
        if(checked[i] == true){
            continue;
        }
        count[i]++;
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i]){
                count[i]++;
                checked[i] = true;
                checked[j] = true;
            }
        }
    }
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(count[i] > 1){
            dem++;
        }
    }
    printf("%d\n", dem);
    for(int i = 0; i < n; i++){
        if(count[i] > 1){
            printf("%d ", a[i]);
        }
    }
}