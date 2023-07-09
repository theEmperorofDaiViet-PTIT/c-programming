#include<stdio.h>
#include<math.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        float n;
        scanf("%f", &n);
        float m = sqrt(n);
        if(m != (int) (n / m)){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}