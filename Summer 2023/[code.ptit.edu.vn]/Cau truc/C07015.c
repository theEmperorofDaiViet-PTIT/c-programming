#include<stdio.h>
#include<string.h>

struct candidate {
    int id;
    char name[100];
    char dob[100];
    float score1;
    float score2;
    float score3;
    float total;
};

void printCandicate(struct candidate candidate){
    printf("%d %s %s %.1f\n", candidate.id, candidate.name, candidate.dob, candidate.total);
}

void main(){
    int n;
    scanf("%d", &n);
    struct candidate candidates[n];
    for(int i = 0; i < n; i++){
        candidates[i].id = i + 1;
        getchar();
        fgets(candidates[i].name, sizeof(candidates[i].name) + 1, stdin);
        candidates[i].name[strcspn(candidates[i].name, "\n")] = 0;
        fgets(candidates[i].dob, sizeof(candidates[i].dob) + 1, stdin);
        candidates[i].dob[strcspn(candidates[i].dob, "\n")] = 0;
        scanf("%f", &candidates[i].score1);
        scanf("%f", &candidates[i].score2);
        scanf("%f", &candidates[i].score3);
        candidates[i].total = candidates[i].score1 + candidates[i].score2 + candidates[i].score3;
    }
    float max = 0;
    for(int i = 0; i < n; i++){
        max = candidates[i].total > max ? candidates[i].total : max;        
    }
    for(int i = 0; i < n; i++){
        if(candidates[i].total == max){
            printCandicate(candidates[i]);
        }       
    }
}