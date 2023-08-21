#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct word {
    char word[100];
    int length;
    int count;
};

struct raw {
    char word[100];
    bool checked;
};

void main(){
    char input[100];
    struct raw a[10000];
    int index = 0;

    while(scanf("%s", input) != EOF){
        strcpy(a[index].word, input);
        a[index].checked = false;
        index++;
    }

    struct word words[10000];
    int indexDiff = 0;
    int maxLength = 0;
    for(int i = 0; i < index; i++){
        if(a[i].checked){
            continue;
        }
        else{
            strcpy(words[indexDiff].word, a[i].word);
            words[indexDiff].length = strlen(words[indexDiff].word);
            maxLength = words[indexDiff].length > maxLength ? words[indexDiff].length : maxLength;
            words[indexDiff].count = 1;
            for(int j = i + 1; j < index; j++){
                if(strcmp(words[indexDiff].word, a[j].word) == 0){
                    words[indexDiff].count++;
                    a[j].checked = true;
                }
            }
            indexDiff++;
            a[i].checked = true;
        }
    }

    for(int i = 0; i < indexDiff; i++){
        if(words[i].length == maxLength){
            printf("%s %d %d\n", words[i].word, words[i].length, words[i].count);
        }
    }
}