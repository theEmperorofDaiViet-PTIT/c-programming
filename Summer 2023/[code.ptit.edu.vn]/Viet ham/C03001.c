#include<stdio.h>
#include<string.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[10];
        scanf("%s", &s);
        int sum = 0;
        for(int i = 0; i < strlen(s); i++){
            sum += (s[i] - 48);
        }
        (sum % 10 == 0) ? printf("YES\n") : printf("NO\n");
    }
}