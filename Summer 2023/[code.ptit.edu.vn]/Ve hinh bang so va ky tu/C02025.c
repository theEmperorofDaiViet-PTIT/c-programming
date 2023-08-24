#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = b;
    char arr[n];
    arr[0] = '@';
    for(int i = 1; i < n; i++){
        arr[i] = 64 + i;
    }

    for(int i = 0; i < a; i++){
        for(int j = i, l = i; j < b; j++, l++){
            printf("%c", arr[l]);
        }
        for(int j = 0; j < i; j++){
            if(j < b){
                printf("%c", arr[n - 1]);
            }
        }
        printf("\n");
    }
}