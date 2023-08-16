#include<stdio.h>
#include<string.h>

int romanToDecimal(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[1000];
        scanf("%s", &s);
        printf("%d\n", romanToDecimal(s));
    }
}

int romanToDecimal(char s[]){
    int res = 0;
    int tmp = 0;
    for(int i = 0; i < strlen(s); i++){
        switch (s[i]){
        case 'I':
            if(i != strlen(s) - 1){
                if(s[i + 1] == 'V' || s[i + 1] == 'X'){
                    tmp = 1;
                    break;
                }
            }
            res += 1;
            break;
        case 'V':
            res += 5 - tmp;
            tmp = 0;
            break;
        case 'X':
            if(i != strlen(s) - 1){
                if(s[i + 1] == 'L' || s[i + 1] == 'C'){
                    tmp = 10;
                    break;
                }
            }
            res += 10 - tmp;
            tmp = 0;
            break;
        case 'L':
            res += 50 - tmp;
            tmp = 0;
            break;
        case 'C':
            if(i != strlen(s) - 1){
                if(s[i + 1] == 'D' || s[i + 1] == 'M'){
                    tmp = 100;
                    break;
                }
            }
            res += 100 - tmp;
            tmp = 0;
            break;
        case 'D':
            res += 500 - tmp;
            tmp = 0;
            break;
        case 'M':
            res += 1000 - tmp;
            tmp = 0;
            break;
        }
    }
    return res;
}