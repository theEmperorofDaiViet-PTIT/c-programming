#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int m = 2 * n - 1;
    int k = n;
    for(int i = n - 1; i >= 0; i--){
        for(int j = n - 1; j >= i + 1; j--){
            printf("%d", j + 1);
        }
        for(int j = 0; j <= i; j++){
            printf("%d", i + 1);
        }
        for(int j = 1; j <= i; j++){
            printf("%d", i + 1);
        }
        for(int j = i + 1; j < n; j++){
            printf("%d", j + 1);
        }
        printf("\n");
    }
    for(int i = 1; i < n; i++){
        for(int j = n - 1; j >= i + 1; j--){
            printf("%d", j + 1);
        }
        for(int j = 0; j <= i; j++){
            printf("%d", i + 1);
        }
        for(int j = 1; j <= i; j++){
            printf("%d", i + 1);
        }
        for(int j = i + 1; j < n; j++){
            printf("%d", j + 1);
        }
        printf("\n");
    }
}