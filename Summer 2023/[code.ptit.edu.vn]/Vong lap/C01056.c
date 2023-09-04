// SỐ KHÔNG GIẢM

// Một số nguyên dương được gọi là số không giảm nếu các chữ số từ trái qua phải tạo thành dãy không giảm. 
// Ví dụ số số 123 là số không giảm, số 121 không phải.
// Viết chương trình kiểm tra một số có phải số không giảm hay không.

// Input
// Dòng đầu ghi số bộ test, mỗi bộ test ghi một số nguyên dương không quá 18 chữ số
// Output
// Với mỗi bộ test, nếu đúng ghi ra YES, nếu sai ghi ra NO.

// Ví dụ:
// Input:
// 2
// 1234567890676543
// 11223334445555689
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
    for(int i = 1; i < 18; i++){
        if(a[i] >= 48 && a[i] <= 57){
            if(a[i] < a[i - 1]){
                return "NO";
            }
        }
    }
    return "YES";
}