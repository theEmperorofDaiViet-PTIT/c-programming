// SỐ ƯU THẾ CHẴN

// Một số được gọi là số ưu thế chẵn nếu nó là số chẵn và số chữ số chẵn nhiều hơn số chữ số lẻ. 
// Hãy viết chương trình kiểm tra một số có phải ưu thế chẵn hay không.

// Input
// Dòng đầu ghi số bộ test
// Mỗi dòng tiếp theo ghi một số nguyên dương không quá 18 chữ số
// Output
// Ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra

// Ví dụ:
// Input:
// 2
// 12345
// 22566678800
// Output:
// NO
// YES

#include<stdio.h>

char* check(char a[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[18];
        scanf("%s", &a);
        printf("%s\n", check(a));
    }
}

char* check(char a[]){
    int odd = 0;
    int even = 0;
    int last;
    for(int i = 0; i < 18; i++){
        if(a[i] >= 48 && a[i] <= 57){
            last = a[i] - 48;
            if(a[i] % 2 == 0){
                even++;
                a[i] = 'x';
            }
            else{
                odd++;
                a[i] = 'x';
            }
        }
    }
    return (even > odd && last % 2 == 0) ? "YES" : "NO";
}