#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int ax, ay, bx, by;
        scanf("%d %d %d %d", &ax, &ay, &bx, &by);
        if(bx - ax == by - ay){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}