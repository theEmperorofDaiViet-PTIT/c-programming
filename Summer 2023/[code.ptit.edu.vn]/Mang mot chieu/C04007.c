#include<stdio.h>

void main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n];
    for(int i = 0; i < m; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    int index;
    scanf("%d", &index);
    for(int i = 0; i < index; i++){
        printf("%d ", a[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
    for(int i = index; i < m; i++){
        printf("%d ", a[i]);
    }
}