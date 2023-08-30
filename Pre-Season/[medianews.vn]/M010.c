// TÌM SỐ ĐẸP (LỘC PHÁT)

// Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8.
// Nhập vào một số nguyên dương không quá 9 chữ số, hãy kiểm tra xem đó có phải số lộc phát hay không.
// Nếu đúng in ra 1, sai in ra 0

// INPUT
// 6068
// OUTPUT
// 1

#include<stdio.h>
#include<string.h>

int check(char s[]);

void main(){
    char s[1000];
    scanf("%s", &s);
    printf("%d", check(s));
}

int check(char s[]){
    for(int i = 0; i < strlen(s); i++){
        if(!(s[i] == '0' || s[i] == '6' || s[i] == '8')){
            return 0;
        }
    }
    return 1;
}