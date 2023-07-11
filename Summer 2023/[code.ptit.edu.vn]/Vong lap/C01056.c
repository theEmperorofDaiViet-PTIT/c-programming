#include<stdio.h>

char* check(char a[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[18];
        scanf("%s", &a);
        printf("%s\n", check(a));
    }
}

char* check(char a[]){
    for(int i = 1; i < 18; i++){
        if(a[i] >= 48 && a[i] <= 57){
            if(a[i] < a[i - 1]){
                return "NO";
            }
        }
    }
    return "YES";
}