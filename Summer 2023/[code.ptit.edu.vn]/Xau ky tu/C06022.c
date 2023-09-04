// XÓA TỪ TRONG XÂU

// Cho trước một xâu ký tự S1 chỉ bao gồm các chữ cái và khoảng trống cùng một từ S2. 
// Hãy tìm xem S2 có xuất hiện trong S1 hay không. 
// Nếu có loại bỏ tất cả những lần xuất hiện của S2 trong S1. 
// Chú ý: tìm S2 trong S1 theo kiểu không phân biệt chữ hoa chữ thường

// Input: 
// Dòng 1 ghi số bộ test. 
// Mỗi bộ test ghi trên hai dòng: 
// Dòng đầu ghi xâu ký tự S1, độ dài không quá 200. 
// Dòng thứ 2 ghi từ S2 (không quá 20 ký tự)
// Output: 
// Với mỗi bộ test ghi ra thứ tự bộ test và xâu kết quả sau khi đã xóa.

// Ví dụ:
// Input:
// 2
// Abc ddd abdc aaa bbb abc ddD XY
// aBc
// ACHDNC XXXX YYYY ABC ABC XXXX
// XxXx
// Output:
// Test 1: ddd abdc aaa bbb ddD XY
// Test 2: ACHDNC YYYY ABC ABC

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void slice(const char* str, char* res, size_t start, size_t end);
void toLowerCase(char s[]);

void main(){
    int T;
    scanf("%d", &T);
    getchar();
    for(int t = 1; t <= T; t++){
        char input1[1000] = "", s1[1000] = "", S1[1000] = "", input2[100] = "", s2[100] = "", S2[100] = "";
        fgets(input1, sizeof(input1) + 1, stdin);
        fgets(input2, sizeof(input2) + 1, stdin);

        slice(input1, s1, 0, strlen(input1) - 1);
        slice(input2, s2, 0, strlen(input2) - 1);

        strcpy(S1, s1);
        strcpy(S2, s2);
        toLowerCase(S1);
        toLowerCase(S2);
        printf("Test %d: ", t);
        for(int i = 0; i < strlen(S1);){
            char res[1000] = "";
            slice(S1, res, i, i + strlen(S2));
            if(strstr(res, S2)){
                i += strlen(S2);
                if(S1[i] == ' ')
                    i++;
            }
            else{
                printf("%c", s1[i]);
                i++;
            }
        }
        printf("\n");
    }
}

void slice(const char* str, char* res, size_t start, size_t end){
    strncpy(res, str + start, end - start);
}

void toLowerCase(char s[]){
    for(int i = 0; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}