// ĐẾM SỐ LẦN XUẤT HIỆN CỦA CÁC CHỮ SỐ TRONG MỘT SỐ

// Viết chương trình C cho phép nhập vào một số n, thực hiện đếm số lần xuất hiện của các chữ số trong n và in ra màn hình.

// INPUT
// 112345
// OUTPUT
// 1 2
// 2 1
// 3 1
// 4 1
// 5 1

#include<stdio.h>
#include<string.h>

void main(){
    int count[10] = {0};
    char s[1000];
    scanf("%s", &s);
    for(int i = 0; i < strlen(s); i++){
        count[s[i] - 48]++;
    }
    for(int i = 0; i < 10; i++){
        if(count[i] > 0){
            printf("%d %d\n", i, count[i]);
        }
    }
}