#include<stdio.h>

int paskal(int n, int m);

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", paskal(i, j));
        }
        printf("\n");
    }

}

int paskal(int n, int m){
    if(n == m || m == 1){
        return 1;
    }
    else{
        return paskal(n - 1, m) + paskal(n - 1, m - 1);
    }
    
}