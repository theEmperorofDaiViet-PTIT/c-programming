#include<stdio.h>

char* check(char a[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[18];
        scanf("%s", &a);
        printf("%s\n", check(a));
    }
}

char* check(char a[]){
    int odd = 0;
    int even = 0;
    int last;
    for(int i = 0; i < 18; i++){
        if(a[i] >= 48 && a[i] <= 57){
            last = a[i] - 48;
            if(a[i] % 2 == 0){
                even++;
                a[i] = 'x';
            }
            else{
                odd++;
                a[i] = 'x';
            }
        }
    }
    return (even > odd && last % 2 == 0) ? "YES" : "NO";
}