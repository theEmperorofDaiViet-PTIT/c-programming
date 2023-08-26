#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool isPalindrome(char s[]);
bool checkAllDigitsOdd(char s[]);
bool checkSumDigitOdd(char s[]);
bool check(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[20] = "";
        scanf("%s", &s);
        (check(s)) ? printf("YES\n") : printf("NO\n");
    }
}

bool check(char s[]){
    return isPalindrome(s) && checkAllDigitsOdd(s) && checkSumDigitOdd(s);
}

bool isPalindrome(char s[]){
    for(int i = 0; i < strlen(s) / 2; i++){
        if(s[i] != s[strlen(s) - i - 1]){
            return false;
        }
    }
    return true;
}

bool checkAllDigitsOdd(char s[]){
    for(int i = 0; i < strlen(s); i++){
        if(s[i] % 2 == 0){
            return false;
        }
    }
    return true;
}

bool checkSumDigitOdd(char s[]){
    int sum = 0;
    for(int i = 0; i < strlen(s); i++){
        sum += (s[i] - 48);
    }
    return sum % 2 == 1;
}