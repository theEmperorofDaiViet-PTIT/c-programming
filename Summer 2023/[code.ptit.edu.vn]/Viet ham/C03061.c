// SỐ ĐẸP

// Một số được coi là đẹp nếu chữ số đầu gấp đôi chữ số cuối hoặc ngược lại; 
// đồng thời các chữ số từ vị trí thứ 2 đến gần cuối thỏa mãn là một số thuận nghịch.
// Ví dụ: các số 36788766; 12345654322 là các số đẹp.
// Viết chương trình kiểm tra số đẹp theo tiêu chí trên.

// Input
// Dòng đầu ghi số bộ test
// Mỗi test là một số nguyên dương không quá 18 chữ số
// Output
// Ghi ra YES tương ứng với số đẹp, NO trong trường hợp ngược lại

// Ví dụ:
// Input:
// 3
// 36788766
// 22345654321
// 12345654321
// Output:
// YES
// YES
// NO

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[20] = "";
        scanf("%s", &s);
        (check(s)) ? printf("YES\n") : printf("NO\n");
    }
}

bool check(char s[]){
    if(!(((s[0] - 48) / (s[strlen(s) - 1] - 48) == 2 && (s[0] - 48) % (s[strlen(s) - 1] - 48) == 0) || ((s[strlen(s) - 1] - 48) / (s[0] - 48) == 2 && (s[strlen(s) - 1] - 48) % (s[0] - 48) == 0))){
        return false;
    }
    for(int i = 1; i < strlen(s) / 2; i++){
        if(s[i] != s[strlen(s) - i - 1]){
            return false;
        }
    }
    return true;
}