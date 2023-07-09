#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[9];
        scanf("%s", &a);
        for(int i = 8; i >= 0; i--){
            if(a[i] >= 48 && a[i] <= 57){
                if(a[0] == a[i]){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
                break;
            }
        }
    }




}