// SỐ LA MÃ

// Bảng chữ số La Mã bao gồm các chữ cái với ý nghĩa I=1; V=5; X=10; L=50; C=100;D=500; M=1000. 
// Một số quy tắc viết các số La Mã như sau:
//     - Tính từ trái sang phải giá trị của các chữ số và nhóm chữ số giảm dần.
//     - I chỉ có thể đứng trước V hoặc X, X chỉ có thể đứng trước L hoặc C, C chỉ có thể đứng trước D hoặc M.
//     - Các chữ cái I, X, C, M, không được lặp lại quá ba lần liên tiếp; các chữ cái V, L, D không được lặp lại quá một lần liên tiếp.
// Bài toán đặt ra là cho một xâu ký tự mô tả đúng một số La Mã. Hãy tính giá trị thập phân của số đó

// Input: 
// Dòng đầu ghi số bộ test. Mỗi bộ test ghi trên một dòng dãy ký tự số La Mã.
// Output: 
// Với mỗi bộ test ghi ra kết quả tương ứng

// Ví dụ:
// Input:
// 3
// XIX
// DC
// CD
// Output:
// 19
// 600
// 400

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