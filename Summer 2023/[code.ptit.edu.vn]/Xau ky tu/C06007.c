// LOẠI BỎ TỪ TRONG XÂU

// Cho xâu ký tự S1 và một từ S2. Viết chương trình loại bỏ tất cả các từ S2 xuất hiện trong S1

// Input:
// Dòng đầu ghi xâu S1 (độ dài không quá 100).
// Dòng thứ 2 ghi từ S2.
// Output:
// Ghi ra xâu S1 sau khi đã loại bỏ các từ S2.

// Ví dụ:
// Input:
// mon thcs2 la mon 2tc
// mon
// Output:
// thcs2 la 2tc

#include<stdio.h>
#include<string.h>

void main(){
    char s1[200];
    fgets(s1, sizeof(s1) + 1, stdin);
    char s2[200];
    fgets(s2, sizeof(s2) + 1, stdin);


    char* a1[200];
    int index1 = 0;
    char* token1 = strtok(s1, " \n");
    while(token1 != NULL){
        a1[index1] = token1;
        index1++;
        token1 = strtok(NULL, " \n");
    }
    char* a2[200];
    int index2 = 0;
    char* token2 = strtok(s2, " \n");
    while(token2 != NULL){
        a2[index2] = token2;
        index2++;
        token2 = strtok(NULL, " \n");
    }

    for(int i = 0; i < index1; i++){
        for(int j = 0; j < index2; j++){
            if(strcmp(a1[i], a2[j]) != 0){
                printf("%s ", a1[i]);
            }
        }
    }
}