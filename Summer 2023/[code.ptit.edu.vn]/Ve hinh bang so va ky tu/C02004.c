#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            printf("~");
        }
        if(i == 0 || i == n - 1){
            for(int j = 0; j < n; j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j = 1; j < n - 1; j++){
                printf(".");
            }
            printf("*");
        }
        printf("\n");
    }
}