// ĐẾM SỐ LẦN XUẤT HIỆN CÁC TỪ TRONG XÂU

// Tìm số lần xuất hiện các từ trong xâu S (không phân biệt chữ hoa chữ thường). 
// Kết quả in ra từ (ở dạng in thường) và số lần xuất hiện của chúng

// Input:
// Chỉ có một dòng ghi xâu S.
// Output:
// Ghi ra kết quả đếm từng từ theo thứ tự xuất hiện.

// Ví dụ:
// Input:
// aaa bbb ccc AA bb aa ccc aa
// Output:
// aaa 1
// bbb 1
// ccc 2
// aa 3
// bb 1

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

void lower(char a[]);

void main(){
    char* a[100];
    char s[100];
    fgets(s, sizeof(s) + 1, stdin);
    int index = 0;
    char* token = strtok(s, " .,:;\'\"()[]{}\n");
    while(token != NULL){
        a[index] = token;
        index++;
        token = strtok(NULL, " .,:;\'\"()[]{}\n");
    }
    bool checked[index];
    int count[index];
    for(int i = 0; i < index; i++){
        checked[i] = false;
        count[i] = 0;
        lower(a[i]);
    }
    for(int i = 0; i < index; i++){
        if(checked[i]){
            continue;
        }
        else{
            count[i]++;
        }
        for(int j = i + 1; j < index; j++){
            if(strcmp(a[i], a[j]) == 0){
                count[i]++;
                checked[j] = true;
                checked[i] = true;
            }
        }
    }
    for(int i = 0; i < index; i++){
        if(count[i] > 0){
        printf("%s %d\n", a[i], count[i]);
        }
    }
}

void lower(char a[]){
    for(int i = 0; i < strlen(a); i++){
        a[i] = tolower(a[i]);
    }
}