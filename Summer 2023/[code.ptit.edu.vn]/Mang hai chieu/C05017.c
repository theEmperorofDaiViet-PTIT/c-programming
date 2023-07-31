#include<stdio.h>

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        int i = 0, j = 0, k = 0;
        char direction = 'R';
        int maxI = n, minI = 0, maxJ = m, minJ = 0;
        while(k < n * m){
            printf("%d ", a[i][j]);
            k++;
            if(i < maxI - 1 && j == maxJ - 1 && direction == 'R'){
                direction = 'D';
            }
            else if(i == maxI - 1 && j == maxJ - 1 && direction == 'D'){
                direction = 'L';
            }
            else if(i == maxI - 1 && j == minJ && direction == 'L'){
                direction = 'U';
            }
            else if(i == minI + 1 && j == minJ && direction == 'U'){
                direction = 'R';
                minI++;
                minJ++;
                maxI--;
                maxJ--;
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
        printf("\n");
    }
}