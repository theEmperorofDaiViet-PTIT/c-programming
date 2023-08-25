#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1, k = 1; i <= n; i++, k += 2){
        for(int j = 1; j <= k; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}