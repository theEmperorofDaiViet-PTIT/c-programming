#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 0; i < a; i++){
        if(i < b){
            for(int j = i; j < b; j++){
                printf("%d", j + 1);
            }
            for(int j = b - 1; j >= b - i; j--){
                printf("%d", j);
            }
        }
        else{
            for(int j = i + 1; j >= i - b + 2; j--){
                printf("%d", j);
            }
        }
        printf("\n");
    }
}