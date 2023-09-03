// XUẤT HIỆN NHIỀU HƠN MỘT LẦN

// Viết chương trình nhập vào mảng một chiều n phần tử (1 < n < 100) và thực hiện in ra các phần tử xuất hiện nhiều hơn 1 lần trong mảng theo thứ tự xuất hiện 
// (Nếu không có phần tử nào thỏa mãn in ra 0).

// Input
// Dòng 1 ghi số n. Dòng 2 ghi n số của mảng.  
// Output
// Ghi ra kết quả trên một dòng.

// Ví dụ:
// Input:
// 7
// 2 3 3 2 1 9 5
// Output:
// 2 3

#include<stdio.h>
#include<stdbool.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    bool no = true;
    bool checked[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        checked[i] = false;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i]){
                if(checked[i] == false){
                    printf("%d ", a[j]);
                }
                checked[i] = true;
                checked[j] = true;
                no = false;
            }
        }
    }
    if(no) printf("%d", 0);
}