#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        if(i <= 1 || i == n - 1){
            for(int j = 0; j <= i; j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j = 1; j <= i - 1; j++){
                printf(".");
            }
            printf("*");
        }
        printf("\n");
    }
}