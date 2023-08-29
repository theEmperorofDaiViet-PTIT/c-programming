#include<stdio.h>
#include<string.h>

void main(){
    char a[1000000][100];
    char input[100];
    int index = 0;
    int maxLength = 0;
    int indexOfMaxLength = 0;
    while(scanf("%s", input) != EOF){
        strcpy(a[index], input);
        if(strlen(input) > maxLength){
            maxLength = strlen(input);
            indexOfMaxLength = index;
        }
        index++;
    }
    printf("%s - %d", a[indexOfMaxLength], maxLength);
}