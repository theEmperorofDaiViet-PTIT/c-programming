#include<stdio.h>
#include<string.h>

void main(){
    char s[200];
    fgets(s, sizeof(s) + 1, stdin);
    int alpha = 0, numeric = 0, symbol = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            alpha++;
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            alpha++;
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            numeric++;
        }
        else if(s[i] == '\n'){
            continue;
        }
        else{
            symbol++;
        }
    }
    printf("%d %d %d", alpha, numeric, symbol);
}