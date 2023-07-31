#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    int i = 0, j = 0, k = 1;
    char direction = 'R';
    int max = n, min = 0;
    while(k <= n * n){
        a[i][j] = k;
        k++;
        if(i < max - 1 && j == max - 1){
            direction = 'D';
        }
        else if(i == max - 1 && j == max - 1){
            direction = 'L';
        }
        else if(i == max - 1 && j == min){
            direction = 'U';
        }
        else if(i == min + 1 && j == min){
            direction = 'R';
            min++;
            max--;
        }
        switch (direction){
            case 'R':
                j++;
                break;
            
            case 'D':
                i++;
                break;
            case 'L':
                j--;
                break;
            case 'U':
                i--;
                break;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}