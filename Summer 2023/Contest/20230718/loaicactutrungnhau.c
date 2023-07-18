#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void main(){
    char* a[100];
    char s[100];
    fgets(s, sizeof(s) + 1, stdin);
    int index = 0;
    char* token = strtok(s, " \n");
    while(token != NULL){
        a[index] = token;
        index++;
        token = strtok(NULL, " \n");
    }
    bool checked[index - 1];
    for(int i = 0; i < index; i++){
        checked[i] = false;
    }
    for(int i = 0; i < index; i++){
        if(checked[i]){
            continue;
        }
        else{
            printf("%s ", a[i]);
        }
        for(int j = i + 1; j < index; j++){
            if(strcmp(a[i], a[j]) == 0){
                checked[j] = true;
                checked[i] = true;
            }
        }
    }
}