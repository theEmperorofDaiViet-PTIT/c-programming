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
        int count = 0;
        int max = a[0];
        for(int i = 0; i < n; i++){
            if(a[i] >= max){
                count++;
                max = a[i];
            }
        }
        printf("%d\n", count);
    }
}