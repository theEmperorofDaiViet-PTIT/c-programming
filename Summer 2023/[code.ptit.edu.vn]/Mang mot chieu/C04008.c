#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    for(int testIndex = 1; testIndex <= t; testIndex++){
        int n, m, p;
        scanf("%d %d %d", &n, &m, &p);
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < m; i++){
            scanf("%d", &b[i]);
        }
        printf("Test %d:\n", testIndex);
        for(int i = 0; i < p; i++){
            printf("%d ", a[i]);
        }
        for(int i = 0; i < m; i++){
            printf("%d ", b[i]);
        }
        for(int i = p; i < n; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}