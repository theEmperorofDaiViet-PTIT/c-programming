#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool check(char a[]);

void main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s[500];
        fgets(s, sizeof(s) + 1, stdin);
        check(s) ? printf("YES\n") : printf("NO\n");
    }
}

bool check(char a[]){
    if(a[0] != '8' || a[strlen(a) - 2] != '8'){
        return false;
    }
    int sum = 0;
    for(int i = 0; i < strlen(a) - 1; i++){
        sum += (a[i] - 48);
    }
    return (sum % 10 == 0) ? true : false;
}