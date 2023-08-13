#include<stdio.h>
#include<string.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[100];
        scanf("%s", &s);
        int i = 0;
        while(i < strlen(s)){
            printf("%c", s[i]);
            int count = 0;
            for(int j = i; j < strlen(s); j++){
                if(s[j] != s[i]){
                    printf("%d", count);
                    i = j;
                    break;
                }
                count++;
                if(j == strlen(s) - 1){
                    printf("%d", count);
                    i = j + 1;
                    break;
                }
            }
        }
        printf("\n");
    }
}