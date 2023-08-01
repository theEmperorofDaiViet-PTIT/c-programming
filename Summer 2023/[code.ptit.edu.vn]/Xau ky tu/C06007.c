#include<stdio.h>
#include<string.h>

void main(){
    char s1[200];
    fgets(s1, sizeof(s1) + 1, stdin);
    char s2[200];
    fgets(s2, sizeof(s2) + 1, stdin);


    char* a1[200];
    int index1 = 0;
    char* token1 = strtok(s1, " \n");
    while(token1 != NULL){
        a1[index1] = token1;
        index1++;
        token1 = strtok(NULL, " \n");
    }
    char* a2[200];
    int index2 = 0;
    char* token2 = strtok(s2, " \n");
    while(token2 != NULL){
        a2[index2] = token2;
        index2++;
        token2 = strtok(NULL, " \n");
    }

    for(int i = 0; i < index1; i++){
        for(int j = 0; j < index2; j++){
            if(strcmp(a1[i], a2[j]) != 0){
                printf("%s ", a1[i]);
            }
        }
    }
}