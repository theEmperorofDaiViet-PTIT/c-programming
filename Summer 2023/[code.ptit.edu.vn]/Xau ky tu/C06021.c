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
    if(s[0] == '0')
        return "INVALID";
    for(int i = 0; i < strlen(s); i++){
        if(!(s[i] >= '0' && s[i] <= '9')){
            return "INVALID";
        }
    }
    int countOdd = 0, countEven = 0;
    for(int i = 0; i < strlen(s); i++){
        if((s[i] - 48) % 2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    if(strlen(s) % 2 == 0){
        if(countOdd >= countEven)
            return "NO";
    }
    else{
        if(countEven >= countOdd)
            return "NO";
    }
    return "YES";
}