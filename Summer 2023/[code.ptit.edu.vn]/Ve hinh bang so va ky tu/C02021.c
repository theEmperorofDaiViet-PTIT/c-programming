#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    int arr[n][n];
    int index = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            arr[j][i] = 0;
        }
        for(int j = i; j < n; j++){
            arr[j][i] = index;
            index++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] != 0){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}