#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int total = 0;
        int odd = 0;
        int even = 0;
        int input;
        char space;
        do {
            scanf("%d", &input);
            total++;
            (input % 2 == 0) ? even++ : odd++;
            scanf("%c", &space);
        }
        while(space != '\n');
        if(total % 2 == 0){
            if(even > odd){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
        else{
            if(odd > even){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
        printf("\n"); 
    }
}