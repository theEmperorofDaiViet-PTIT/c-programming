// ĐỔI CHỖ CHỮ SỐ ĐẦU TIÊN VÀ CHỮ SỐ CUỐI CÙNG CỦA MỘT SỐ

// Viết chương trình C cho phép nhập vào một số nguyên n và thực hiện đổi vị trí của chữ cái đầu tiên và chữ cái cuối cùng.
// Lưu ý trong trường hợp chữ số cuối cùng là 0 thì khi đổi chỗ sẽ được loại bỏ (ví dụ 9800 -> 809)

// INPUT
// 1234
// OUTPUT
// 4231

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void main(){
    char s[1000];
    scanf("%s", &s);
    bool firstDigitChecked = false;

    char tmp = s[0];
    s[0] = s[strlen(s) - 1];
    s[strlen(s) - 1] = tmp;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] != '0'){
            firstDigitChecked = true;
        }
        if(firstDigitChecked){
            printf("%c", s[i]);
        }
    }
}