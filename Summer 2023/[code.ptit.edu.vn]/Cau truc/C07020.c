#include<stdio.h>

struct pokemon {
    char name[100];
    int amount;
};

int evolve(int require, int available){
    int count = 0;
    while(available >= require){
        available -= require;
        count++;
        available += 2;
    }
    return count;
}

void main(){
    int n;
    scanf("%d", &n);
    struct pokemon pokemons[n];
    int max = 0;
    int total = 0;
    for(int i = 0; i < n; i++){
        scanf("%s", &pokemons[i].name);
        int require, avaiable;
        scanf("%d %d", &require, &avaiable);
        pokemons[i].amount = evolve(require, avaiable);
        max = pokemons[i].amount > max ? pokemons[i].amount : max;
        total += pokemons[i].amount;
    }

    printf("%d\n", total);
    for(int i = 0; i < n; i++){
        if(pokemons[i].amount == max){
            printf("%s", pokemons[i].name);
            break;
        }
    }
}