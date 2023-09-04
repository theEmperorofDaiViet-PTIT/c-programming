// CHUẨN HÓA XÂU HỌ TÊN 2

// Các cán bộ, giảng viên PTIT khi tham gia hội nghị quốc tế sẽ được viết lại xâu họ tên theo dạng chuẩn trong đó họ được viết sau cùng, phân tách với phần tên đệm và tên bởi dấu phẩy. Các chữ cái của họ đều viết hoa.
// Cho trước các xâu họ tên (có thể không chuẩn). Hãy đưa về dạng chuẩn tương ứng.

// Input:
// Dòng 1 ghi số N là xâu họ tên trong danh sách
// N dòng tiếp theo ghi lần lượt các xâu họ tên (không quá 50 ký tự)
// Output: 
// Ghi ra các xâu chuẩn.

// Ví dụ:
// Input:
// 4
//     nGUYEn    quaNG   vInH
//    tRan   thi THU    huOnG
//    nGO   quoC  VINH
//  lE            tuAn    aNH
// Output:
// Quang Vinh, NGUYEN
// Thi Thu Huong, TRAN
// Quoc Vinh, NGO
// Tuan Anh, LE

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void solve(char s[]);
void toTitleCase(char s[]);
void toUpperCase(char s[]);

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
    for(int i = 1; i < index - 1; i++){
        toTitleCase(a[i]);
        printf("%s ", a[i]);
    }
    toTitleCase(a[index - 1]);
    printf("%s, ", a[index - 1]);
    toUpperCase(a[0]);
    printf("%s\n", a[0]);
}

void toTitleCase(char s[]){
    s[0] = toupper(s[0]);
    for(int i = 1; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}

void toUpperCase(char s[]){
    for(int i = 0; i < strlen(s); i++){
        s[i] = toupper(s[i]);
    }
}