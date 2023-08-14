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