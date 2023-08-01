#include<stdio.h>
#include<string.h>

void main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s[200];
        fgets(s, sizeof(s) + 1, stdin);
        int count = 0;
        for(int i = 1; i < strlen(s); i++){
            if(s[i] == ' ' && s[i - 1] != ' '){
                count++;
            }
            if(i == strlen(s) - 1 && s[i - 1] != ' '){
                count++;
            }
        }        
        printf("%d\n", count);
    }
}