// TÁCH ĐÔI VÀ TÍNH TỔNG

// Cho một số nguyên dương không quá 200 chữ số. 
// Mỗi bước tách số nguyên thành hai nửa: nửa đầu là n/2 chữ số đầu tiên, nửa sau là phần còn lại 
// (trong đó n là số chữ số của số ban đầu, nếu n lẻ thì phép chia 2 sẽ tính phần nguyên). 
// Sau đó thực hiện tính tổng của hai nửa này.
// Lặp lại các bước trên cho đến khi kết quả chỉ còn là số có 1 chữ số.
// Hãy thực hiện tính toán và in kết quả của từng bước.

// Input
// Chỉ có một số nguyên dương không quá 200 chữ số.
// Output
// Ghi ra kết quả từng bước, mỗi bước trên một dòng. Dừng lại khi kết quả chỉ còn 1 chữ số.

// Ví dụ:
// Input:
// 123456
// Output:
// 579
// 84
// 12
// 3

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void format(char n[]);
void sum(char a[], char b[], char sum[]);
void print(char s[]);

void main(){
    char s[200];
    char a[200], b[200];
    for(int i = 0; i < 200; i++){
        a[i] = 'x';
        b[i] = 'x';
        s[i] = 'x';
    }
    scanf("%s", &s);
    int len = strlen(s);
    int realLen = 0;
    int firstIndex = 0;
    if(len == 1){
        printf("%s", s);
    }
    format(s);
    while(len > 1){
        for(int i = 199 - len + 1; i < 200; i++){
            if(s[i] != '0'){
                firstIndex = i;
                realLen = 199 - i + 1;
                break;
            }
        }
        for(int i = 0; i < 200; i++){
            a[i] = 'x';
            b[i] = 'x';
        }
        int slice = realLen / 2 + firstIndex;
        for(int i = slice - 1, j = 199; i >= firstIndex; i--){
            a[j] = s[i];
            j--;
        }
        for(int i = 199, j = 199; i >= slice; i--){
            b[j] = s[i];
            j--;
        }
        for(int i = 0; i < 200; i++){
            s[i] = 'x';
        }

        sum(a, b, s);

        int tmpLength = 0;
        for(int i = 199; i >= 0; i--){
            if(s[i] >= 48 && s[i] <= 57){
                tmpLength++;
            }
        }
        realLen = tmpLength;
        len = tmpLength;
        print(s);
    }
}

void format(char n[]){
    char m[200];
    for(int i = 0; i < 200; i++){
        m[i] = 'x';
    }
    for(int i = 199, j = 199; i >= 0; i--){
        if(n[i] >= 48 && n[i] <= 57){
            m[j] = n[i];
            j--;
        }
    }
    for(int i = 0; i < 200; i++){
        n[i] = 'x';
    }    
    for(int i = 199, j = 199; i >= 0; i--){
        if(m[i] >= 48 && m[i] <= 57){
            n[i] = m[i];
            j--;
        }
    }
}

void sum(char a[], char b[], char sum[]){
    int extra = 0;
    for(int i = 199; i >= 0; i--){
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
    for(int i = 0; i < 200; i++){
        if(s[i] > 48 && s[i] <= 57){
            firstDigitChecked = true;
            printf("%c", s[i]);
        }
        if(s[i] == '0' && firstDigitChecked){
            printf("0");
        }
        if(s[i] == '0' && i == 199 && !firstDigitChecked){
            printf("0");
        }
    }
    printf("\n");
}

// void intToString(int n, char s[]){
//     sprintf(s, "%d", n);
// }

// int stringToInt(char s[], int start, int end){
//     int res = 0;
//     int base = 0;
//     for(int i = start; i >= end; i--){
//         res += (s[i] - 48) * pow(10, base);
//         base++;
//     }
//     return res;
// }