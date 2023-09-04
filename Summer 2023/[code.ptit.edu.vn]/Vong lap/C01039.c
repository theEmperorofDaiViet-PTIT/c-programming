// ĐẾM SỐ CHỮ SỐ

// Cho số nguyên dương N không quá 9 chữ số.
// Hãy đếm xem N có bao nhiêu chữ số.

// Input
// Chỉ có một số nguyên dương N không quá 9 chữ số. 
// Output
// Ghi ra kết quả trên một dòng

// Ví dụ:
// Input:
// 1234
// Output:
// 4

#include<stdio.h>

void main(){
    char a[10];
    scanf("%s", &a);
    int count = 0;
    for(int i = 0; i < 10; i++){
        if(a[i] >= 48 && a[i] <= 57){
            count++;
        }
    }
    printf("%d", count);
}