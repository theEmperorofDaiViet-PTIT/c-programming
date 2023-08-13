#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int solve(char s[]);

void main(){
    char s[100];
    scanf("%s", &s);
    printf("%d", solve(s));
}

int solve(char s[]){
    bool check[strlen(s)];
    for(int i = 0; i < strlen(s); i++){
        check[i] = false;
    }
    for(int i = 0; i < strlen(s); i++){
        switch (s[i]){
        case '(':
            for(int j = i + 1; j < strlen(s); j++){
                if(s[j] == ')' && check[j] == false){
                    check[i] = true;
                    check[j]= true;
                    break;
                }
            }
            break;
        case '[':
            for(int j = i + 1; j < strlen(s); j++){
                if(s[j] == ']' && check[j] == false){
                    check[i] = true;
                    check[j]= true;
                    break;
                }
            }
            break;
        case '{':
            for(int j = i + 1; j < strlen(s); j++){
                if(s[j] == '}' && check[j] == false){
                    check[i] = true;
                    check[j]= true;
                    break;
                }
            }
            break;
        case '\'':
            for(int j = i + 1; j < strlen(s); j++){
                if(s[j] == '\'' && check[j] == false){
                    check[i] = true;
                    check[j]= true;
                    break;
                }
            }
            break;
        case '"':
            for(int j = i + 1; j < strlen(s); j++){
                if(s[j] == '"' && check[j] == false){
                    check[i] = true;
                    check[j]= true;
                    break;
                }
            }
            break;
        default:
            break;
        }
    }
    for(int i = 0; i < strlen(s); i++){
        if(check[i] == false){
            return 0;
        }
    }
    return 1;
}