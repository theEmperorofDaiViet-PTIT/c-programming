#include<stdio.h>

void main(){
    char a[9];
    scanf("%s", &a);
    int lastIndex = 0;
    for(int i = 0; i < 9; i++){
        if(a[i] >= 48 && a[i] <= 57){
            lastIndex = i;
        }
    }
    printf("%d %d", a[0] - 48, a[lastIndex] - 48);
}