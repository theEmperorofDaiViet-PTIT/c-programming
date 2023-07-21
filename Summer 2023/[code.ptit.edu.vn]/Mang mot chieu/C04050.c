#include<stdio.h>

void main(){
    int n, m;
    char check[1000];
    for(int i = 0; i < 1000; i++){
        check[i] = 'o';
    }
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        check[a[i]] = 'A';
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
        switch (check[b[i]]){
        case 'A':
            check[b[i]] = 'x';
            break;
        case 'x':
            break;
        default:
            check[b[i]] = 'B';
            break;
        }
    }
    for(int i = 0; i < 1000; i++){
        if(check[i] == 'x'){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(int i = 0; i < 1000; i++){
        if(check[i] == 'A'){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(int i = 0; i < 1000; i++){
        if(check[i] == 'B'){
            printf("%d ", i);
        }
    }
}