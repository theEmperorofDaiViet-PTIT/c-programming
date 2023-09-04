// CHỮ SỐ ĐẦU CUỐI

// Viết chương trình nhập vào một số nguyên dương N không quá 9 chữ số.
// In ra chữ số đầu tiên và cuối cùng của N.

// Input
// Chỉ có một số nguyên dương N không quá 9 chữ số.
// Output
// Ghi ra kết quả trên một dòng

// Ví dụ:
// Input:
// 1234
// Output:
// 1 4

#include<stdio.h>

void main(){
    char a[9];
    scanf("%s", &a);
    int lastIndex = 0;
    for(int i = 0; i < 9; i++){
        if(a[i] >= 48 && a[i] <= 57){
            lastIndex = i;
        }
    }
    printf("%d %d", a[0] - 48, a[lastIndex] - 48);
}