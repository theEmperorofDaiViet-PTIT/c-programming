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