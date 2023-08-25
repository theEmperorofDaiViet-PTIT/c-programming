#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1, k = 1; i <= n; i++, k += 2){
        for(int j = 1; j <= n - i; j++){
            printf("~");
        }
        for(int j = 1, l = 1; j <= k / 2 + 1; j++, l += 2){
            printf("%d", l);
        }
        for(int j = k / 2 + 2, l = k - 2; j <= k; j++, l -= 2){
            printf("%d", l);
        }
        printf("\n");
    }
}