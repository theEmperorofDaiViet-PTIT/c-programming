// SỐ ƯU THẾ LẺ

// Một số được gọi là số ưu thế lẽ nếu nó là số lẻ và số chữ số lẻ nhiều hơn số chữ số chẵn. 
// Hãy viết chương trình kiểm tra một số có phải ưu thế lẻ hay không.

// Input
// Dòng đầu ghi số bộ test
// Mỗi dòng tiếp theo ghi một số nguyên dương không quá 18 chữ số
// Output
// Ghi ra YES hoặc NO tùy thuộc kết quả kiểm tra

// Ví dụ:
// Input:
// 2
// 12345
// 22566678801
// Output:
// YES
// NO

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
    return (odd > even && last % 2 != 0) ? "YES" : "NO";
}