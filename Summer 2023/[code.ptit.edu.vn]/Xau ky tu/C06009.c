#include<stdio.h>
#include<stdbool.h>

char* check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s[500];
        fgets(s, sizeof(s) + 1, stdin);
        printf("%s\n", check(s));
    }
}

char* check(char s[]){
    if(s[6] == s[7] && s[6] == s[8] && s[6] == s[10] && s[6] == s[11])
        return "YES";
    if(s[6] == s[7] && s[6] == s[8] && s[10] == s[11])
        return "YES";

    bool inc = true;
    for(int i = 7; i < 9; i++){
        if(s[i] <= s[i - 1])
            inc = false;
    }
    if(s[10] <= s[8] || s[11] <= s[10])
        inc = false;
    if(inc)
        return "YES";

    for(int i = 6; i <= 11; i++){
        if(i != 9 && s[i] != '6' && s[i] != '8'){
            return "NO";
        }
    }
    return "YES";
}