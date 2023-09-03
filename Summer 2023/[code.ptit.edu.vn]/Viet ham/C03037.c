// ĐẾM CHỮ SỐ NGUYÊN TỐ

// Viết chương trình nhập vào một số n, không quá 18 chữ số.
// Hãy thực hiện đếm số lần xuất hiện của các chữ số nguyên tố trong n và in ra màn hình. 
// (Liệt kê theo thứ tự xuất hiện các chữ số)

// Input
// Chỉ có một số nguyên dương N không quá 18 chữ số. 
// Output
// Ghi ra kết quả, mỗi dòng ghi một số nguyên tố và số lần xuất hiện theo thứ tự xuất hiện.

// Ví dụ:
// Input:
// 112345
// Output:
// 2 1
// 3 1
// 5 1

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void main(){
    bool sieve[10];
    for(int i = 0; i < 10; i++){
        sieve[i] = true;
    }
    sieve[0] = false;
    sieve[1] = false;
    for(int i = 2; i < 10; i++){
        if(sieve[i]){
            for(int j = i * i; j < 10; j += i){
                sieve[j] = false;
            }
        }
    }

    char s[20];
    int count[10];
    bool checked[10];
    for(int i = 0; i < 10; i++){
        count[i] = 0;
        checked[i] = false;
    }
    scanf("%s", &s);
    for(int i = 0; i < strlen(s); i++){
        count[s[i] - 48]++;
    }
    for(int i = 0; i < strlen(s); i++){
        if(!checked[s[i] - 48] && sieve[s[i] - 48]){
            printf("%d %d\n", s[i] - 48, count[s[i] - 48]);
            checked[s[i] - 48] = true;
        }
    }
}