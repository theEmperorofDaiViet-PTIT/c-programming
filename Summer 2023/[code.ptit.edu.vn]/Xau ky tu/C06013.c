// SỐ ĐẦY ĐỦ

// Cho một số nguyên dương lớn có nhiều hơn 20 chữ số nhưng không quá 1000 chữ số. 
// Hãy kiểm tra xem số đó có đầy đủ tất cả các chữ số từ 0 đến 9 hay không.

// Dữ liệu vào
// Dòng đầu ghi số bộ test, không quá 10
// Mỗi bộ test là một dãy ký tự có độ dài không quá 1000, không có khoảng trống
// Kết quả
// Nếu dữ liệu vào không phải là một số nguyên hợp lệ (có ký tự không phải số hoặc bắt đầu bằng chữ số 0) thì in ra INVALID
// Nếu dữ liệu vào thỏa mãn đầy đủ thì in ra YES, nếu không in ra NO

// Ví dụ:
// Input:
// 3
// 01234aa32432432432534545b987978
// 123444444444444566666666667890
// 324562783924723543243243242354354354333234324
// Output:
// INVALID
// YES
// NO

#include<stdio.h>
#include<string.h>

char* check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[1000];
        scanf("%s", &s);
        printf("%s\n", check(s));
    }
}

char* check(char s[]){
    int count[10] = {0};
    if(s[0] == '0')
        return "INVALID";
    for(int i = 0; i < strlen(s); i++){
        if(!(s[i] >= '0' && s[i] <= '9')){
            return "INVALID";
        }
        else{
            count[s[i] - 48]++;
        }
    }
    for(int i = 0; i <= 9; i++){
        if(count[i] == 0)
            return "NO";
    }
    return "YES";
}