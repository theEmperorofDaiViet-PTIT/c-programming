#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 0; i < a; i++){
        if(i < b){
            for(int j = i; j >= 0; j--){
                printf("%d", j + 1);
            }
            for(int j = 2; j < b - i + 1; j++){
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