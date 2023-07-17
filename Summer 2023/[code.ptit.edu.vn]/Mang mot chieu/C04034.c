#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < n; i++){
            int max = -1;
            for(int j = n - 1; j > i; j--){
                if(a[j] > max){
                    max = a[j];
                }
            }
            (a[i] > max) ? printf("%d ", a[i]) : printf("");
        }
        printf("\n");
    }
}