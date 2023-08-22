#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct student {
    int id;
    char name[100];
    float score1;
    float score2;
    float score3;
    float total;
    bool isIncreasing;
};

void printStudent(struct student student){
    printf("%d %s %.1f %.1f %.1f\n", student.id, student.name, student.score1, student.score2, student.score3);
}

void sort(struct student students[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        struct student tmp = students[i];
        while(j >= 0 && students[j].total > tmp.total){
            students[j + 1].id = students[j].id;
            strcpy(students[j + 1].name, students[j].name);
            students[j + 1].score1 = students[j].score1;            
            students[j + 1].score2 = students[j].score2;            
            students[j + 1].score3 = students[j].score3;            
            students[j + 1].total = students[j].total;      

            j--;      
        }
        students[j + 1].id = tmp.id;
        strcpy(students[j + 1].name, tmp.name);
        students[j + 1].score1 = tmp.score1;            
        students[j + 1].score2 = tmp.score2;            
        students[j + 1].score3 = tmp.score3;            
        students[j + 1].total = tmp.total;  
    }
}

void main(){
    struct student students[10000];
    int count = 0;
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 1){
            int n1;
            scanf("%d", &n1);
            for(int i = 0; i < n1; i++){
                getchar();
                students[count].id = count + 1;
                fgets(students[count].name, sizeof(students[count].name) + 1, stdin);
                students[count].name[strcspn(students[count].name, "\n")] = 0;
                scanf("%f %f %f", &students[count].score1, &students[count].score2, &students[count].score3);
                students[count].total = students[count].score1 + students[count].score2 + students[count].score3;
                students[count].isIncreasing = (students[count].score1 < students[count].score2) && (students[count].score2 < students[count].score3);
                count++;
            }
            printf("%d\n", n1);
        }
        else if(n == 2){
            int n2;
            scanf("%d", &n2);
            int index = n2 - 1;
            char name[100];
            getchar();
            fgets(name, sizeof(name) + 1, stdin);
            name[strcspn(name, "\n")] = 0;
            float score1, score2, score3;
            scanf("%f %f %f", &score1, &score2, &score3);

            strcpy(students[index].name, name);
            students[index].score1 = score1;
            students[index].score2 = score2;
            students[index].score3 = score3;
            students[index].total = score1 + score2 + score3;
            students[index].isIncreasing = (score1 < score2) && (score2 < score3);
            printf("%d\n", n2);
        }
        else if(n == 3){
            for(int i = 0; i < count; i++){
                if(students[i].isIncreasing){
                    printStudent(students[i]);
                }
            }
            break;
        }
    }
}