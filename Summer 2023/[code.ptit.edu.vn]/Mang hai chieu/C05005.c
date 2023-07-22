#include<stdio.h>

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        printf("Test %d:\n", t);
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d", &a[i][j]);
            }
        }
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}