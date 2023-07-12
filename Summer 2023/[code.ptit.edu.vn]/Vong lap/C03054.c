#include<stdio.h>
#include<stdbool.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[18];
        scanf("%s", &a);
        char s[18];
        bool allZero = true;
        bool firstDigitChecked = false;
        bool invalidNumber = false;
        int index = 0;
        for(int i = 0; i < 18; i++){
            if(a[i] >= 48 && a[i] <= 57){
                if(a[i] - 48 == 0){
                    if(firstDigitChecked){
                        s[index] = '0';
                        index++;
                    }
                }
                else if(a[i] - 48 == 1){
                    allZero = false;
                    firstDigitChecked = true;
                    s[index] = '1';
                    index++;
                }
                else if(a[i] - 48 == 8){
                    if(firstDigitChecked){
                        s[index] = '0';
                        index++;
                    }
                }
                else if(a[i] - 48 == 9){
                    if(firstDigitChecked){
                        s[index] = '0';
                        index++;
                    }
                }
                else{
                    invalidNumber = true;
                    break;
                }
            }
        }
        if(invalidNumber || allZero){
            printf("INVALID\n");
        }
        else{
            for(int i = 0; i < index; i++){
                if(s[i] >= 48 && s[i] <= 57){
                    printf("%c", s[i]);
                }
            }
            printf("\n");
        }
        for(int i = 0; i < 18; i++){
            a[i] = 'x';
            s[i] = 'x';
        }
    }
}