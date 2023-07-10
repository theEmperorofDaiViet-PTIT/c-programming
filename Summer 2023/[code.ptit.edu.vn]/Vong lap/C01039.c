#include<stdio.h>

void main(){
    char a[10];
    scanf("%s", &a);
    int count = 0;
    for(int i = 0; i < 10; i++){
        if(a[i] >= 48 && a[i] <= 57){
            count++;
        }
    }
    printf("%d", count);
}