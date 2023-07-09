#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[9];
        scanf("%s", &a);
        int sum = 0;
        for(int i = 0; i < 9; i++){
            if(a[i] >= 48 && a[i] <= 57){
                sum += a[i] - 48;
            }
        }
        printf("%d\n", sum);        
    }
}