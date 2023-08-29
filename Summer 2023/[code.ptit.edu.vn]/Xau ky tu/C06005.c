#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

void lower(char a[]);

void main(){
    char* a[100];
    char s[100];
    fgets(s, sizeof(s) + 1, stdin);
    int index = 0;
    char* token = strtok(s, " .,:;\'\"()[]{}\n");
    while(token != NULL){
        a[index] = token;
        index++;
        token = strtok(NULL, " .,:;\'\"()[]{}\n");
    }
    bool checked[index];
    int count[index];
    for(int i = 0; i < index; i++){
        checked[i] = false;
        count[i] = 0;
        lower(a[i]);
    }
    for(int i = 0; i < index; i++){
        if(checked[i]){
            continue;
        }
        else{
            count[i]++;
        }
        for(int j = i + 1; j < index; j++){
            if(strcmp(a[i], a[j]) == 0){
                count[i]++;
                checked[j] = true;
                checked[i] = true;
            }
        }
    }
    for(int i = 0; i < index; i++){
        if(count[i] > 0){
        printf("%s %d\n", a[i], count[i]);
        }
    }
}

void lower(char a[]){
    for(int i = 0; i < strlen(a); i++){
        a[i] = tolower(a[i]);
    }
}