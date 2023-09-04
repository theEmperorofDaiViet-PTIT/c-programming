// TÍNH TỔNG NHỎ NHẤT VÀ LỚN NHẤT

// Cho hai số nguyên dương X1, X2. Ta chỉ được phép thay đổi chữ số 5 thành 6 và ngược lại chữ số 6 thành chữ số 5 của các số X1 và X2. 
// Hãy đưa ra tổng nhỏ nhất và tổng lớn nhất các số X1 và X2 được tạo ra theo nguyên tắc kể trên.

// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test là cặp các số X1, X2.
// T, X1, X2 thỏa mãn ràng buộc: 1 ≤ T ≤ 100; 0 ≤ X1, X2 ≤ 10^18.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.

// Ví dụ:
// Input:
// 2
// 645  666
// 5466 4555
// Output:
// 1100  1312
// 10010 11132

#include<stdio.h>
#include<stdbool.h>

void format(char n[]);
void transformMin(char n[]);
void transformMax(char n[]);
void sum(char a[], char b[], char sum[]);
void print(char s[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[19], b[19], resMin[19], resMax[19];
        scanf("%s %s", a, b);
        format(a);
        format(b);

        transformMin(a);
        transformMin(b);


        sum(a, b, resMin);
        print(resMin);

        transformMax(a);
        transformMax(b);

        sum(a, b, resMax);
        print(resMax);
        // reset
        for(int i = 0; i < 19; i++){
            a[i] = 'x';
            b[i] = 'x';
            resMin[i] = 'x';
            resMax[i] = 'x';
        }
        printf("\n");
    }
}

void format(char n[]){
    char m[19];
    for(int i = 0; i < 19; i++){
        m[i] = 'x';
    }
    for(int i = 18, j = 18; i >= 0; i--){
        if(n[i] >= 48 && n[i] <= 57){
            m[j] = n[i];
            j--;
        }
    }
    for(int i = 0; i < 19; i++){
        n[i] = 'x';
    }    
    for(int i = 18, j = 18; i >= 0; i--){
        if(m[i] >= 48 && m[i] <= 57){
            n[i] = m[i];
            j--;
        }
    }
}

void transformMin(char n[]){
    for(int i = 0; i < 19; i++){
        if(n[i] == '6'){
            n[i] = '5';
        }
    }
}

void transformMax(char n[]){
    for(int i = 0; i < 19; i++){
        if(n[i] == '5'){
            n[i] = '6';
        }
    }    
}

void sum(char a[], char b[], char sum[]){
    int extra = 0;
    for(int i = 18; i >= 0; i--){
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
    for(int i = 0; i < 19; i++){
        if(s[i] > 48 && s[i] <= 57){
            firstDigitChecked = true;
            printf("%c", s[i]);
        }
        if(s[i] == '0' && firstDigitChecked){
            printf("0");
        }
        if(s[i] == '0' && i == 18 && !firstDigitChecked){
            printf("0");
        }
    }
    printf(" ");
}