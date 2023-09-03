// MẢNG ĐỐI XỨNG

// Nhập một dãy số nguyên có n phần tử (n không quá 100, các phần tử trong dãy không quá 109). 
// Hãy viết chương trình kiểm tra xem dãy có phải đối xứng hay không. Nếu đúng in ra YES, nếu sai in ra NO.

// Input: 
// Dòng đầu ghi số bộ test, mỗi bộ test gồm hai dòng. 
// Dòng đầu là số phần tử của dãy, dòng sau ghi ra dãy đó, mỗi số cách nhau một khoảng trống.
// Output: 
// In ra kết quả kiểm tra.

// Ví dụ:
// Input:
// 2
// 4
// 1 4 4 1
// 5
// 1 5 5 5 3
// Output:
// YES
// NO

#include<stdio.h>

char* check(int a[], int n);

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
        printf(check(a, n));
    }
}

char* check(int a[], int n){
    for(int i = 0, j = n - 1; i < n && j >= 0; i++, j--){
        if(a[i] != a[j])
            return "NO\n";
    }
    return "YES\n";
}