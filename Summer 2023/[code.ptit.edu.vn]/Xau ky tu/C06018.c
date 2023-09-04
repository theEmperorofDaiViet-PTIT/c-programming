// TẬP TỪ RIÊNG CỦA HAI XÂU 2

// Cho hai xâu ký tự S1 và S2. Hãy viết chương trình tìm các từ chỉ xuất hiện trong S1 mà không xuất hiện trong S2. 
// Chú ý: mỗi từ chỉ liệt kê 1 lần.

// Input: 
// Dòng 1 ghi số bộ test. 
// Mỗi bộ test gồm 2 dòng, mỗi dòng ghi một xâu ký tự độ dài không quá 200, chỉ bao gồm các ký tự viết thường và các khoảng trống. 

// Output: 
// Với mỗi bộ test ghi ra các từ có trong S1 mà không có trong S2. Các từ được ghi theo thứ tự từ điển.

// Ví dụ:
// Input:
// 2
// abc ab ab ab abcd
// ab abc
// aaa xyz ab zzz abc dd dd abc
// xyz dd ttt sas cdc
// Output:
// abcd
// aaa ab abc zzz

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

void main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s1[1000], s2[1000];
        fgets(s1, sizeof(s1) + 1, stdin);
        fgets(s2, sizeof(s2) + 1, stdin);

        char* a1[1000];
        int index1 = 0;
        char* token1 = strtok(s1, " \n");
        while(token1 != NULL){
            a1[index1] = token1;
            index1++;
            token1 = strtok(NULL, " \n");
        }
        char* a2[1000];
        int index2 = 0;
        char* token2 = strtok(s2, " \n");
        while(token2 != NULL){
            a2[index2] = token2;
            index2++;
            token2 = strtok(NULL, " \n");
        }

        bool checked[index1];
        for(int i = 0; i < index1; i++){
            checked[i] = false;
        }
        for(int i = 0; i < index1; i++){
            for(int j = i + 1; j < index1; j++){
                if(strcmp(a1[i], a1[j]) == 0){
                    checked[j] = true;
                }
            }
        }

        for(int i = 0; i < index1; i++){
            if(checked[i] == false){
                for(int j = 0; j < index2; j++){
                    if(strcmp(a1[i], a2[j]) == 0){
                        checked[i] = true;
                        break;
                    }
                }
            }
        }

        char res[index1][1000];
        for(int i = 0; i < index1; i++){
            strcpy(res[i], a1[i]);
        }

        for(int i = 0; i < index1; i++){
            for(int j = i + 1; j < index1; j++){
                char tmp[1000] = "";
                bool temp;
                if(strcmp(res[i], res[j]) > 0){
                    strcpy(tmp, res[i]);
                    strcpy(res[i], res[j]);
                    strcpy(res[j], tmp);

                    temp = checked[i];
                    checked[i] = checked[j];
                    checked[j] = temp;
                }
            }
        }


        for(int i = 0; i < index1; i++){
            if(checked[i] == false){
                printf("%s ", res[i]);
            }
        }
        printf("\n");
    }
}