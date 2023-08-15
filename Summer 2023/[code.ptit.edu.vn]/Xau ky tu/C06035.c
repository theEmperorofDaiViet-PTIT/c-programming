#include<stdio.h>
#include<string.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[200];
        scanf("%s", &s);
        int countDiff = 0;
        for(int i = 0; i < strlen(s) / 2; i++){
            if(s[i] != s[strlen(s) - i - 1])
                countDiff++;
        }
        if(strlen(s) % 2 == 0){
            (countDiff == 1) ? printf("YES\n") : printf("NO\n");
        }
        else{
            (countDiff <= 1) ? printf("YES\n") : printf("NO\n");
        }
    }
}