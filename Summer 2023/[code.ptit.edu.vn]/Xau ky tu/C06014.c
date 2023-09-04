// CHUẨN HÓA XÂU HỌ TÊN 1

// Một xâu họ tên được coi là viết chuẩn nếu chữ cái đầu tiên mỗi từ được viết hoa, các chữ cái khác viết thường. 
// Các từ cách nhau đúng một dấu cách và không có khoảng trống thừa ở đầu và cuối xâu. 
// Hãy viết chương trình đưa các xâu họ tên về dạng chuẩn.

// Input:
// Dòng 1 ghi số bộ test. Mỗi bộ test ghi trên một dòng xâu ký tự họ tên, không quá 80 ký tự.
// Output:
// Với mỗi bộ test ghi ra xâu ký tự họ tên đã chuẩn hóa.

// Ví dụ:
// Input:
// 3
//    nGuYEN    vAN    naM
// tRan           TRUNG hiEU
//       vO le         hOA bINh
// Output:
// Nguyen Van Nam
// Tran Trung Hieu
// Vo Le Hoa Binh

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void solve(char s[]);
void toTitleCase(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s[100];
        fgets(s, sizeof(s) + 1, stdin);
        solve(s);
    }
}

void solve(char s[]){
    char* a[100];
    int index = 0;
    char* token = strtok(s, " \n");
    while(token != NULL){
        a[index] = token;
        index++;
        token = strtok(NULL, " \n");
    }
    for(int i = 0; i < index; i++){
        toTitleCase(a[i]);
        printf("%s ", a[i]);
    }
    printf("\n");
}

void toTitleCase(char s[]){
    s[0] = toupper(s[0]);
    for(int i = 1; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}