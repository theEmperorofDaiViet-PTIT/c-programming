#include<stdio.h>

void main(){
    int t;
    scanf("%d0", &t);
    while(t--){
        char a[9];
        scanf("%s", &a);
        int odd = 0;
        int even = 0;
        for(int i = 0; i < 9; i++){
            if(a[i] >= 48 && a[i] <= 57){
                if(a[i] % 2 == 1)
                    odd++;
                else
                    even++;
            }
        }
        printf("%d %d\n", odd, even);
    }
}