#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("0 ");
        }
        for(int j = i + 1, k = 1; j < n; j++, k++){
            printf("%d ", k);
        }
        printf("\n");
    }
}