#include<stdio.h>

int gcd(int a, int b);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        (gcd(a, b) == gcd(c, d)) ? printf("YES\n") : printf("NO\n");
    }
}

int gcd(int a, int b){
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else  
        return gcd(a, b - a);
}