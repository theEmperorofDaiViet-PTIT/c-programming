#include<stdio.h>
#include<string.h>

char* check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[1000];
        scanf("%s", &s);
        printf("%s\n", check(s));
    }
}

char* check(char s[]){
    int count[10] = {0};
    if(s[0] == '0')
        return "INVALID";
    for(int i = 0; i < strlen(s); i++){
        if(!(s[i] >= '0' && s[i] <= '9')){
            return "INVALID";
        }
        else{
            count[s[i] - 48]++;
        }
    }
    for(int i = 0; i <= 9; i++){
        if(count[i] == 0)
            return "NO";
    }
    return "YES";
}