#include<stdio.h>
#include<math.h>

void count(char n[]);

void main(){
    char n[10];
    scanf("%s", &n);
    count(n);
}

void count(char n[]){
    int prime[4] = {2, 3, 5, 7};
    int count[4] = {0, 0, 0, 0};
    for(int i = 0; i < 10; i++){
        if(n[i] >= 48 && n[i] <= 57){
            switch (n[i] - 48){
                case 2:
                    count[0]++;
                    break;
                case 3:
                    count[1]++;
                    break;
                case 5:
                    count[2]++;
                    break;
                case 7:
                    count[3]++;
                    break;
                default:
                    break;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        if(count[i] > 0){
            printf("%d %d\n", prime[i], count[i]);
        }
    }
}