// TRỘN HAI DÃY VÀ SẮP XẾP

// Cho hai dãy số nguyên dương A và B không quá 100 phần tử, các giá trị trong dãy không quá 30000 và số phần tử của hai dãy bằng nhau. 
// Hãy trộn hai dãy với nhau sao cho dãy A được đưa vào các vị trí có chỉ số chẵn, dãy B được đưa vào các vị trí có chỉ số lẻ. 
// Đồng thời, dãy A được sắp xếp tăng dần, còn dãy B được sắp xếp giảm dần. (Chú ý: chỉ số tính từ 0)

// Input: 
// Dòng 1 ghi số bộ test. 
// Với mỗi bộ test: 
// Dòng đầu tiên ghi số n. 
// Dòng tiếp theo ghi n số nguyên dương của dãy A. 
// Dòng tiếp theo ghi n số nguyên dương của dãy B.
// Output: 
// Với mỗi bộ test, đưa ra thứ tự bộ test và dãy kết quả.

// Ví dụ:
// Input:
// 2
// 5
// 1 2 3 1 2
// 3 1 2 3 1
// 4
// 4 2 7 1
// 5 6 2 8
// Output:
// Test 1:
// 1 3 1 3 2 2 2 1 3 1
// Test 2:
// 1 8 2 6 4 5 7 2

#include<stdio.h>
#include<stdbool.h>

void sort(int a[], int n, bool reverse);

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &b[i]);
        }
        sort(a, n, false);
        sort(b, n, true);
        printf("Test %d:\n", t);
        for(int i = 0; i < n; i++){
            printf("%d %d ", a[i], b[i]);
        }
        printf("\n");
    }
}

void sort(int a[], int n, bool reverse){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int tmp = a[i];
        if(reverse == false){
            while(j >= 0 && a[j] > tmp){
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = tmp;
        }
        else{
            while(j >= 0 && a[j] < tmp){
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = tmp; 
        }
    }
}