#include<stdio.h>
#include<math.h>

void main(){
    int m, n;
    scanf("%d %d", &m, &n);
   
    int x = ceil(sqrt(m));
    int y = floor(sqrt(n));
    printf("%d\n", y - x + 1);
    for(int i = x; i <= y; i++){
        printf("%d\n", i * i);
    }
}