// TÌM TỪ THUẬN NGHỊCH DÀI NHẤT

// Cho một văn bản. Hãy tìm ra từ thỏa mãn tính chất thuận nghịch có độ dài lớn nhất trong và cho biết từ đó xuất hiện bao nhiêu lần.
// Nếu có nhiều từ cùng có độ dài lớn nhất thì in ra tất cả các từ đó theo thứ tự xuất hiện.

// Input: Văn bản không quá 1000 từ.
// Output: Ghi ra trên một dòng từ thuận nghịch có độ dài lớn nhất và số lần xuất hiện của nó.
// Nếu có nhiều từ cùng có độ dài lớn nhất thì các từ được liệt kê theo thứ tự xuất hiện ban đầu.

// Ví dụ:
// Input:
// AAA BAABA HDHDH ACBSD SRGTDH DDDDS
// DUAHD AAA AD DA HDHDH AAA AAA AAA AAA
// DDDAS HDHDH HDH AAA AAA AAA AAA AAA
// AAA AAA AAA
// DHKFKH DHDHDD HDHDHD DDDHHH HHHDDD
// TDTD
// Output:
// HDHDH 3

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