#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = (a > b) ? a : b;
    char arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = 65 + i;
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%c", arr[j]);
        }
        if(i < b - 1){
            int tmp = arr[0];
            for(int j = 0; j < b - i - 1; j++){
                arr[j] = arr[j + 1];
            }
            arr[b - i - 1] = tmp;
        }
        printf("\n");
    }
}