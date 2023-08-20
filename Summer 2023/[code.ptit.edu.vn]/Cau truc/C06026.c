#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct word {
    char word[1000];
    int length;
    int count;
};

struct raw {
    char word[1000];
    bool checked;
};

bool check(char s[]);

void main(){
    char s[10000];
    char input[10000];
    struct raw a[10000];
    int index = 0;

    while(scanf("%s", input) != EOF){
        strcpy(a[index].word, input);
        a[index].checked = false;
        index++;
    }
    
    struct word words[10000];
    int indexDiff = 0;
    for(int i = 0; i < index; i++){
        if(a[i].checked){
            continue;
        }
        else{
            if(check(a[i].word)){
                strcpy(words[indexDiff].word, a[i].word);
                words[indexDiff].length = strlen(words[indexDiff].word);
                words[indexDiff].count = 1;
                for(int j = i + 1; j < index; j++){
                    if(strcmp(words[indexDiff].word, a[j].word) == 0){
                        words[indexDiff].count++;
                        a[j].checked = true;
                    }
                }
                indexDiff++;
            }
            a[i].checked = true;
        }
    }

    int max = 0;
    for(int i = 0; i < indexDiff; i++){
        max = (words[i].length > max) ? words[i].length : max;
    }
    for(int i = 0; i < indexDiff; i++){
        if(words[i].length == max){
            printf("%s %d\n", words[i].word, words[i].count);
        }
    }
}

bool check(char s[]){
    for(int i = 0; i < strlen(s) / 2; i++){
        if(s[i] != s[strlen(s) - i - 1]){
            return false;
        }
    }
    return true;
}