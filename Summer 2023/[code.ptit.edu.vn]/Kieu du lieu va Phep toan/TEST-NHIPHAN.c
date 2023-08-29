#include<stdio.h>

void main(){
    int a;
    scanf("%d", &a);
    char s[10] = "";
    int index = -1;
    if(a == 0){
        printf("0");
    }
    else{
        while(a > 0){
            index++;
            s[index] = 48 + (a % 2);
            a /= 2;
        }
        for(int i = index; i >= 0; i--){
            printf("%c", s[i]);
        }
    }
}