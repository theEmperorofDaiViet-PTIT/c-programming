#include<stdio.h>
#include<string.h>

void check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[18];
        scanf("%s", &s);
        check(s);
    }
}

void check(char s[]){
    for(int i = 0; i < strlen(s); i++){
        if(!(s[i] == '0' || s[i] == '1' || s[i] == '2')){
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}