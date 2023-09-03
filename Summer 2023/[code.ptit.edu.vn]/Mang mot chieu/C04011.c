// ĐẾM SỐ PHẦN TỬ LỚN HƠN SỐ ĐỨNG TRƯỚC

// Cho một dãy số nguyên dương có n phần tử (2 <= n <= 50). 
// Hãy liệt kê số các phần tử trong dãy không nhỏ hơn các số đứng trước nó (tính cả phần tử đầu tiên).

// Input: 
// Dòng 1 ghi số bộ test. 
// Mỗi bộ test ghi ra 2 dòng: dòng 1 là số phần tử, dòng thứ 2 ghi dãy số.
// Output: 
// Ghi ra số phần tử thỏa mãn.

// Ví dụ:
// Input:
// 1
// 7
// 3 5 6 8 4 2 9
// Output:
// 5

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
        int count = 0;
        int max = a[0];
        for(int i = 0; i < n; i++){
            if(a[i] >= max){
                count++;
                max = a[i];
            }
        }
        printf("%d\n", count);
    }
}