// SỐ LỚN NHẤT

// Viết chương trình tìm số lớn nhất trong một dãy số cho trước.

// Input: 
// Dòng đầu ghi số bộ test. 
// Mỗi test gồm 2 dòng, dòng đầu ghi số N là số phần tử của dãy. 
// Dòng sau ghi N số của dãy. N không quá 100, các số trong dãy đều nguyên dương và không quá 1000.
// Output: 
// Với mỗi bộ test ghi trên hai dòng:
// Dòng thứ nhất là giá trị số lớn nhất
// Dòng thứ 2 lần lượt là các vị trí trong dãy có giá trị lớn nhất (chỉ số tính từ 0).

// Ví dụ:
// Input:
// 1
// 7
// 3 5 9 8 4 2 9
// Output:
// 9
// 2 6

#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int max = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > max){
                max = a[i];
            }
        }
        printf("%d\n", max);
        for(int i = 0; i < n; i++){
            if(a[i] == max){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}