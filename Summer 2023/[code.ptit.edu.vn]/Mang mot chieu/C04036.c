#include<stdio.h>

void main(){
    int bank[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int count = 0;
        while(n > 0){
            int selected;
            for(int i = 0; i < 10; i++){
                if(bank[i] > n){
                    break;
                }
                selected = bank[i];
            }
            count++;
            n -= selected;
        }
        printf("%d\n", count);
    }
}