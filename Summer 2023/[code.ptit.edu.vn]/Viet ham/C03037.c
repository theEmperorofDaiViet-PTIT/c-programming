#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void main(){
    bool sieve[10];
    for(int i = 0; i < 10; i++){
        sieve[i] = true;
    }
    sieve[0] = false;
    sieve[1] = false;
    for(int i = 2; i < 10; i++){
        if(sieve[i]){
            for(int j = i * i; j < 10; j += i){
                sieve[j] = false;
            }
        }
    }

    char s[20];
    int count[10];
    bool checked[10];
    for(int i = 0; i < 10; i++){
        count[i] = 0;
        checked[i] = false;
    }
    scanf("%s", &s);
    for(int i = 0; i < strlen(s); i++){
        count[s[i] - 48]++;
    }
    for(int i = 0; i < strlen(s); i++){
        if(!checked[s[i] - 48] && sieve[s[i] - 48]){
            printf("%d %d\n", s[i] - 48, count[s[i] - 48]);
            checked[s[i] - 48] = true;
        }
    }
}