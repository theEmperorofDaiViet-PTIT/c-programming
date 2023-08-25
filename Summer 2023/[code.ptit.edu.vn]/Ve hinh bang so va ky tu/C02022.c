#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    int arr[n][n];
    int index = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j <= i; j++){
                arr[i][j] = index;
                index++;
            }
        }
        else{
            for(int j = i; j >= 0; j--){
                arr[i][j] = index;
                index++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j <= i){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}