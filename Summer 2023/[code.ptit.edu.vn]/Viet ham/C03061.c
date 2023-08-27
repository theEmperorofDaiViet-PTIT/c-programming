#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[20] = "";
        scanf("%s", &s);
        (check(s)) ? printf("YES\n") : printf("NO\n");
    }
}

bool check(char s[]){
    if(!(((s[0] - 48) / (s[strlen(s) - 1] - 48) == 2 && (s[0] - 48) % (s[strlen(s) - 1] - 48) == 0) || ((s[strlen(s) - 1] - 48) / (s[0] - 48) == 2 && (s[strlen(s) - 1] - 48) % (s[0] - 48) == 0))){
        return false;
    }
    for(int i = 1; i < strlen(s) / 2; i++){
        if(s[i] != s[strlen(s) - i - 1]){
            return false;
        }
    }
    return true;
}