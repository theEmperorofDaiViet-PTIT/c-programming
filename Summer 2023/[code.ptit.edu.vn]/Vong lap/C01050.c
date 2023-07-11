#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    for(int i = 0; i < b; i++){
        for(int j = 0; j < a; j++){
            if(i == 0 || i == b - 1){
                printf("*");
            }
            else{
                (j == 0 || j == a - 1) ? printf("*") : printf(" ");
            }
        }
        printf("\n");
    }
}