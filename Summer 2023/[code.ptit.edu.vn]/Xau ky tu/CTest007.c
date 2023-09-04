// HỆ CƠ SỐ 3

// Hệ cơ số 3 chỉ biểu diễn các số sử dụng ba chữ số là 0, 1, 2.
// Nhập vào dãy biểu diễn không quá 18 ký tự, hãy kiểm tra xem dãy biểu diễn nào là đúng với hệ cơ số 3.

// Input
// Dòng đầu là số bộ test, mỗi dòng tiếp theo ghi một dãy biểu diễn cần kiểm tra.
// Output
// Nếu đúng in ra YES, nếu sai in ra NO.

// Ví dụ:
// Input:
// 3
// 1214AB
// 10210221
// 22222222
// Output:
// NO
// YES
// YES

#include<stdio.h>
#include<string.h>

void check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[18];
        scanf("%s", &s);
        check(s);
    }
}

void check(char s[]){
    for(int i = 0; i < strlen(s); i++){
        if(!(s[i] == '0' || s[i] == '1' || s[i] == '2')){
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}