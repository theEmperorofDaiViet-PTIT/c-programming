#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = (a > b) ? a : b;
    char arr[n];
    for(int i = n; i >= 0; i--){
        arr[i] = 97 + i;
    }

    for(int i = 0, k = n - 1; i < a; i++, k--){
        for(int j = 0, l = n - 1; j < i; j++, l--){
            if(j < b){
                printf("%c", arr[l]);
            }
        }
        for(int j = i; j < b; j++){
            printf("%c", arr[k]);
        }
        printf("\n");
    }
}