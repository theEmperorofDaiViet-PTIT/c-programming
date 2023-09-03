// SỐ XUẤT HIỆN NHIỀU LẦN NHẤT TRONG DÃY

// Cho một dãy số nguyên dương không quá 100 phần tử, các giá trị trong dãy không quá 30000. 
// Hãy xác định xem số nào là số xuất hiện nhiều lần nhất trong dãy. 
// Chú ý: trong trường hợp nhiều số khác nhau cùng xuất hiện số lần bằng nhau và là lớn nhất thì in ra tất cả các số đó theo thứ tự xuất hiện trong dãy ban đầu.  

// Input: 
// Dòng đầu là số bộ test, không quá 20. 
// Mỗi bộ test gồm hai dòng. Dòng đầu ghi số phần tử của dãy, dòng tiếp theo ghi các phần tử của dãy.  
// Output: 
// Với mỗi bộ test, đưa ra số xuất hiện nhiều lần nhất trong dãy đã cho.

// Ví dụ:
// Input:
// 2
// 10
// 1 2 3 1 2 3 1 2 3 1
// 10
// 1 2 3 4 5 6 7 8 9 0
// Output:
// 1
// 1 2 3 4 5 6 7 8 9 0

#include<stdio.h>
#include<stdbool.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        bool checked[n];
        int count[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            checked[i] = false;
            count[i] = 0;
        }
        for(int i = 0; i < n; i++){
            if(checked[i] == false){
                count[i]++;
            }
            else{
                continue;
            }
            for(int j = i + 1; j < n; j++){
                if(a[j] == a[i]){
                    checked[i] = true;
                    checked[j] = true;
                    count[i]++;
                }
            }
        }
        int max = 0;
        for(int i = 0; i < n; i++){
            if(count[i] > max){
                max = count[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(count[i] == max){
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
}