#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0){
        printf("%s", "Vo so nghiem");
    }
    else if(a == 0  && b != 0){
        printf("%s", "Vo nghiem");
    }
    else{
        printf("%.2f", (double) -b / a);
    }
}