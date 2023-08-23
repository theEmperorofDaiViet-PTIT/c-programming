#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < i; j++){
            printf("~");
        }
        if(i == 0 || i == a - 1){
            for(int j = 0; j < b; j++){
                printf("*");
            }
        }
        else{
            printf("*");
            for(int j = 1; j < b - 1; j++){
                printf(".");
            }
            printf("*");
        }
        printf("\n");
    }
}