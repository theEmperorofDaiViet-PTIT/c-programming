#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long n;
        scanf("%d", &n);
        printf("%ld\n", n * n);
    }
}