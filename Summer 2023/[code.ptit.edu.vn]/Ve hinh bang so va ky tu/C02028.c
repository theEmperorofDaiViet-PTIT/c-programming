#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    char arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = 65 + 2 * i;
    }

    for(int i = n - 1; i >= 0; i--){
        for(int j = n - i - 1; j < n; j++){
            printf("%c", arr[j]);
        }
        printf("\n");
    }
}