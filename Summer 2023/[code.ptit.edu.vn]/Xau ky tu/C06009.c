// BIỂN SỐ ĐẸP

// Biển số xe máy được quy định gồm các thành phần:
//     - Hai chữ số đầu là mã quản lý theo tỉnh – thành phố (ví dụ mã của Hà Nội là 29 đến 31)
//     - Tiếp theo là dấu gạch ngang, sau đó là một chữ cái in hoa (từ A đến Z) và một chữ số. Cặp chữ cái và chữ số này được cấp theo khu vực quận – huyện.
//     - Tiếp theo là một dãy 5 số gồm 2 cụm: 3 chữ số đầu và hai chữ số sau, phân tách bởi dấu chấm.

// Thông thường, người ta chỉ quan tâm đến 5 chữ số cuối. Giả sử các trường hợp sau được coi là đẹp:
//     - Cả 5 chữ số được sắp theo thứ tự tăng chặt từ trái qua phải.
//     - Cả 5 chữ số đều bằng nhau
//     - Ba chữ số đầu bằng nhau và hai chữ số cuối bằng nhau
//     - Cả 5 chữ số đều là 6 và/hoặc 8 (số lộc phát).

// Theo quy tắc trên, các biển số sau được coi là đẹp:
//     - 29-T1 123.79
//     - 29-T1 555.55
//     - 29-T1 222.33
//     - 29-T1 686.88

// Và các biển số sau không đẹp:
//     - 29-T1 123.33
//     - 29-T1 555.54
//     - 29-T1 606.88

// Viết chương trình kiểm tra xem các biển số xe có đẹp hay không.

// Dữ liệu vào
// Dòng đầu ghi số bộ test, không quá 50
// Mỗi bộ test là một biển số. Dữ liệu vào đảm bảo biển số được viết đúng quy định. 
// Kết quả
// In ra kết quả kiểm tra với từng bộ test

// Ví dụ:
// Input:
// 7
// 29-T1 123.45
// 29-T1 555.55
// 29-T1 222.33
// 29-T1 686.88
// 29-T1 123.33
// 29-T1 555.54
// 29-T1 606.88
// Output:
// YES
// YES
// YES
// YES
// NO
// NO
// NO

#include<stdio.h>
#include<stdbool.h>

char* check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s[500];
        fgets(s, sizeof(s) + 1, stdin);
        printf("%s\n", check(s));
    }
}

char* check(char s[]){
    if(s[6] == s[7] && s[6] == s[8] && s[6] == s[10] && s[6] == s[11])
        return "YES";
    if(s[6] == s[7] && s[6] == s[8] && s[10] == s[11])
        return "YES";

    bool inc = true;
    for(int i = 7; i < 9; i++){
        if(s[i] <= s[i - 1])
            inc = false;
    }
    if(s[10] <= s[8] || s[11] <= s[10])
        inc = false;
    if(inc)
        return "YES";

    for(int i = 6; i <= 11; i++){
        if(i != 9 && s[i] != '6' && s[i] != '8'){
            return "NO";
        }
    }
    return "YES";
}