#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            int k;
            scanf("%d", &k);
            if(k % 2 == 0)
                printf("%d ", k);
        }
        printf("\n");
    }
}