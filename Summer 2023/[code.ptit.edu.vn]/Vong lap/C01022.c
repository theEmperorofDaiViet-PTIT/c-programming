// TỔNG CHỮ SỐ - 2

// Hãy viết chương trình tính tổng các chữ số của một số nguyên bất kỳ.

// Input
// Dòng đầu tiên của dữ liệu vào ghi số bộ test, mỗi bộ test ghi trên một dòng 1 số nguyên dương không quá 9 chữ số.
// Output
// Kết quả của mỗi bộ test cũng ghi trên một dòng.

// Ví dụ:
// Input:
// 1
// 1234
// Output:
// 10

#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[9];
        scanf("%s", &a);
        int sum = 0;
        for(int i = 0; i < 9; i++){
            if(a[i] >= 48 && a[i] <= 57){
                sum += a[i] - 48;
            }
        }
        printf("%d\n", sum);        
    }
}