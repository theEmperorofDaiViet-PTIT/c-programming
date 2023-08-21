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

void sort(struct candidate candidates[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        struct candidate tmp = candidates[i];
        while(j >= 0 && candidates[j].total < tmp.total){
            candidates[j + 1].id = candidates[j].id;
            strcpy(candidates[j + 1].name, candidates[j].name);
            strcpy(candidates[j + 1].dob, candidates[j].dob);
            candidates[j + 1].score1 = candidates[j].score1;            
            candidates[j + 1].score2 = candidates[j].score2;            
            candidates[j + 1].score3 = candidates[j].score3;            
            candidates[j + 1].total = candidates[j].total;      

            j--;      
        }
        candidates[j + 1].id = tmp.id;
        strcpy(candidates[j + 1].name, tmp.name);
        strcpy(candidates[j + 1].dob, tmp.dob);
        candidates[j + 1].score1 = tmp.score1;            
        candidates[j + 1].score2 = tmp.score2;            
        candidates[j + 1].score3 = tmp.score3;            
        candidates[j + 1].total = tmp.total;  
    }
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

    sort(candidates, n);

    for(int i = 0; i < n; i++){
        printCandicate(candidates[i]);   
    }
}