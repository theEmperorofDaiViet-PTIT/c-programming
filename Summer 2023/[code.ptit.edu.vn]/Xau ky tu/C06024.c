// TỔNG HAI SỐ NGUYÊN LỚN

// Viết chương trình cộng hai số nguyên dương bất kỳ (không quá 500 chữ số).

// Input:
// Dòng 1 ghi số bộ test. Mỗi bộ test gồm 2 dòng, mỗi dòng ghi một số nguyên dương
// Output:
// Với mỗi bộ test ghi ra một số nguyên dương là tổng hai số đã cho (số này cũng không quá 500 chữ số).

// Ví dụ:
// Input:
// 3
// 12
// 100
// 1212
// 8888
// 121212121212121212
// 45678978
// Output:
// 112
// 10100
// 121212121257800190

#include<stdio.h>
#include<stdbool.h>

void format(char n[]);
void sum(char a[], char b[], char sum[]);
void print(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[500], b[500], res[500];
        for(int i = 0; i < 500; i++){
            a[i] = 'x';
            b[i] = 'x';
            res[i] = 'x';
        }
        scanf("%s %s", a, b);
        format(a);
        format(b);


        sum(a, b, res);
        print(res);
        printf("\n");
    }
}

void format(char n[]){
    char m[500];
    for(int i = 0; i < 500; i++){
        m[i] = 'x';
    }
    for(int i = 499, j = 499; i >= 0; i--){
        if(n[i] >= 48 && n[i] <= 57){
            m[j] = n[i];
            j--;
        }
    }
    for(int i = 0; i < 500; i++){
        n[i] = 'x';
    }    
    for(int i = 499, j = 499; i >= 0; i--){
        if(m[i] >= 48 && m[i] <= 57){
            n[i] = m[i];
            j--;
        }
    }
}

void sum(char a[], char b[], char sum[]){
    int extra = 0;
    for(int i = 499; i >= 0; i--){
        // a có nhiều chữ số hơn
        if(a[i] >= 48 && a[i] <= 57 && !(b[i] >= 48 && b[i] <= 57)){
            b[i] = '0';
        }
        // b có nhiều chữ số hơn
        if(!(a[i] >= 48 && a[i] <= 57) && b[i] >= 48 && b[i] <= 57){
            a[i] = '0';
        }
        // còn nhớ
        if(!(a[i] >= 48 && a[i] <= 57) && !(b[i] >= 48 && b[i] <= 57) && extra > 0){
            a[i] = '0';
            b[i] = '0';
        }        
        if(a[i] >= 48 && a[i] <= 57 && b[i] >= 48 && b[i] <= 57){
            sum[i] = (((a[i] - 48) + (b[i] - 48) + extra) % 10) + 48;
            if((a[i] - 48) + (b[i] - 48) + extra >= 10){
                extra = 1;
            }
            else{
                extra = 0;
            }
        }
    }
}

void print(char s[]){
    bool firstDigitChecked = false;
    for(int i = 0; i < 500; i++){
        if(s[i] > 48 && s[i] <= 57){
            firstDigitChecked = true;
            printf("%c", s[i]);
        }
        if(s[i] == '0' && firstDigitChecked){
            printf("0");
        }
        if(s[i] == '0' && i == 499 && !firstDigitChecked){
            printf("0");
        }
    }
    printf(" ");
}