// SỐ ƯU THẾ

// Cho một số nguyên dương lớn có nhiều hơn 20 chữ số nhưng không quá 1000 chữ số. 
// Một số nguyên dương được coi là “số ưu thế chẵn” nếu số chữ số của nó là chẵn và số chữ số chẵn nhiều hơn số chữ số lẻ.
// Một số nguyên dương được coi là “số ưu thế lẻ” nếu số chữ số của nó là lẻ và số chữ số lẻ nhiều hơn số chữ số chẵn.
// Hãy kiểm tra xem số đó có phải là số ưu thế (chẵn hoặc lẻ) hay không. 
// Chú ý: trường hợp số lượng chữ số chẵn và số lượng chữ số lẻ bằng nhau thì không được coi là số ưu thế.

// Dữ liệu vào
// Dòng đầu ghi số bộ test, không quá 10
// Mỗi bộ test là một dãy ký tự có độ dài không quá 1000, không có khoảng trống
// Kết quả
// Nếu dữ liệu vào không phải là một số nguyên hợp lệ (có ký tự không phải số hoặc bắt đầu bằng chữ số 0) thì in ra INVALID
// Nếu dữ liệu vào thỏa mãn là số ưu thế thì in ra YES, nếu không in ra NO

// Ví dụ:
// Input:
// 3
// 01234aa32432432432534545b987978
// 1234567890123456789000
// 999999999999999999999999999999
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
    if(s[0] == '0')
        return "INVALID";
    for(int i = 0; i < strlen(s); i++){
        if(!(s[i] >= '0' && s[i] <= '9')){
            return "INVALID";
        }
    }
    int countOdd = 0, countEven = 0;
    for(int i = 0; i < strlen(s); i++){
        if((s[i] - 48) % 2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    if(strlen(s) % 2 == 0){
        if(countOdd >= countEven)
            return "NO";
    }
    else{
        if(countEven >= countOdd)
            return "NO";
    }
    return "YES";
}