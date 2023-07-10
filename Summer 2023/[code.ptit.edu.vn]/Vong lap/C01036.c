#include<stdio.h>

void main(){
    char a[10];
    scanf("%s", &a);
    int product = 1;
    for(int i = 0; i < 10; i++){
        if(a[i] >= 48 && a[i] <= 57){
            product *= (a[i] - 48);
        }
    }
    printf("%d", product);
}