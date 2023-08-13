#include<stdio.h>
#include<string.h>
#include<math.h>

int stringToInt(char s[], int start, int end);
void intToString(int n, char s[]);

void main(){
    char s[100005];
    scanf("%s", &s);
    int len = strlen(s);
    int realLen = 0;
    int firstIndex = 0;
    if(len == 1){
        printf("%s", s);
    }
    while(len > 1){
        for(int i = 0; i < len; i++){
            if(s[i] != '0'){
                firstIndex = i;
                realLen = len - i;
                break;
            }
        }
        int slice = realLen / 2 + firstIndex;
        int a = stringToInt(s, slice - 1, firstIndex);
        int b = stringToInt(s, len - 1, slice);
        intToString(a + b, s);
        realLen = strlen(s);
        len = strlen(s);
        printf("%s\n", s);
    }
}

void intToString(int n, char s[]){
    sprintf(s, "%d", n);
}

int stringToInt(char s[], int start, int end){
    int res = 0;
    int base = 0;
    for(int i = start; i >= end; i--){
        res += (s[i] - 48) * pow(10, base);
        base++;
    }
    return res;
}