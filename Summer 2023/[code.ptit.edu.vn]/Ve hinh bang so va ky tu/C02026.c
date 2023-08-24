#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = b;
    char arr[n];
    for(int i = n - 1; i >= 0; i--){
        arr[i] = 65 + i;
    }

    for(int i = 0; i < a; i++){
        for(int j = b - (i + b - a) - 1; j < b; j++){
            printf("%c", arr[j]);
        }
        for(int j = 0; j < b - (i + b - a) - 1; j++){
            if(j < b){
                printf("%c", arr[n - 1]);
            }
        }
        printf("\n");
    }
}