// ĐẾM SỐ LẦN XUẤT HIỆN 1

// Viết chương trình nhập vào mảng một chiều n phần tử (1 < n < 100) và thực hiện in ra các phần tử cùng số lần xuất hiện của chúng trong mảng. 
// Các phần tử liệt kê theo thứ tự xuất hiện.

// Input
// Dòng 1 ghi số n. Dòng 2 ghi n số của mảng.
// Output
// Ghi ra kết quả kết quả gồm các số khác nhau và số lần xuất hiện. Mỗi số trên một dòng.

// Ví dụ:
// Input:
// 7
// 2 3 3 2 1 9 5
// Output:
// 2 2
// 3 2
// 1 1
// 9 1
// 5 1

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
    for(int i = 0; i < n; i++){
        if(count[i] > 0){
            printf("%d %d\n", a[i], count[i]);
        }
    }
}