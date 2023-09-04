// TỔNG CHỮ SỐ - 1

// Viết chương trình nhập vào một số n không quá 10^9, thực hiện tìm tổng các chữ số của n và in ra màn hình.

// Input:
// Chỉ có một dòng ghi số n.
// Output:
// Ghi ra kết quả tính toán

// Ví dụ:
// Input:
// 1234
// Output:
// 10

#include<stdio.h>

void main(){
    char a[10];
    scanf("%s", &a);
    int sum = 0;
    for(int i = 0; i < 10; i++){
        if(a[i] >= 48 && a[i] <= 57){
            sum += a[i] - 48;
        }
    }
    printf("%d", sum);
}