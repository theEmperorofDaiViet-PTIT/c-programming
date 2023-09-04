// HIỆU HAI SỐ NGUYÊN LỚN

// Viết chương trình tính hiệu của hai số nguyên lớn. Chú ý: luôn luôn lấy số lớn hơn trừ đi số nhỏ hơn.

// Input:
// Dòng 1 ghi số bộ test
// Mỗi bộ test gồm 2 dòng, mỗi dòng ghi một số không quá 1000 chữ số.
// Output:
// Với mỗi bộ test ghi ra kết quả tính toán tương ứng

// Ví dụ:
// Input:
// 3
// 456
// 789
// 100000000000000000000000000001
// 99
// 123456789012345678901234567890
// 1234567890
// Output:
// 333
// 99999999999999999999999999902
// 123456789012345678900000000000

#include<stdio.h>
#include<stdbool.h>

void format(char n[]);
int compare(char a[], char b[]);
void difference(char a[], char b[], char difference[]);
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
        if(compare(a, b) >= 0){
            difference(a, b, res);
        }
        else{
            difference(b, a, res);
        }

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

int compare(char a[], char b[]){
    for(int i = 0, j = 0; i < 500; i++, j++){
        if((a[i] >= 48 && a[i] <= 57) && !(b[i] >= 48 && b[i] <= 57)){
            return 1;
        }
        if(!(a[i] >= 48 && a[i] <= 57) && (b[i] >= 48 && b[i] <= 57)){
            return -1;
        }
    }
    for(int i = 0, j = 0; i < 500; i++, j++){
        if((a[i] >= 48 && a[i] <= 57) && (b[i] >= 48 && b[i] <= 57)){
            if(a[i] > b[i]){
                return 1;
            }
            if(a[i] < b[i]){
                return -1;
            }
        }
    }
    return 0;
}

void difference(char a[], char b[], char difference[]){
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
            if((a[i] - 48) - (b[i] - 48) - extra < 0){
                difference[i] = (((a[i] - 48) + 10 - (b[i] - 48) - extra) + 48);
                extra = 1;
            }
            else{
                difference[i] = (((a[i] - 48) - (b[i] - 48) - extra) + 48);
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