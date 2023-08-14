#include<stdio.h>
#include<string.h>
#include<ctype.h>

void solve(char s[]);
void toLowerCase(char s[]);

void main(){
    char s[100];
    fgets(s, sizeof(s) + 1, stdin);
    solve(s);
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
    for(int i = 0; i < index - 1; i++){
        toLowerCase(a[i]);
        printf("%c", a[i][0]);
    }
    toLowerCase(a[index - 1]);
    printf("%s@ptit.edu.vn", a[index - 1]);
}

void toLowerCase(char s[]){
    for(int i = 0; i < strlen(s); i++){
        s[i] = tolower(s[i]);
    }
}