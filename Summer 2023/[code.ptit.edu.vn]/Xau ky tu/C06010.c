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
    for(int i = 0, j = strlen(a) - 2; i < (strlen(a) - 1) / 2; i++, j--){
        if(a[i] != a[j]){
            return false;
        }
        if(a[i] % 2 != 0 || a[j] % 2 != 0){
            return false;
        }
    }
    return true;
}