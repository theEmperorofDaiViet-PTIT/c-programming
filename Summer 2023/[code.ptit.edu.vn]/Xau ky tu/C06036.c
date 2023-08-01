#include<stdio.h>
#include<string.h>

void main(){
    char s[100005];
    gets(s);
    printf("%d", strlen(s) - 1);
}