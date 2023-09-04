// SỐ ĐẸP 2

// Một số được coi là đẹp nếu đó là số thuận nghịch, bắt đầu và kết thúc bằng chữ số 8 và tổng chữ số chia hết cho 10. 
// Viết chương trình đọc vào các số nguyên dương có không quá 500 chữ số và kiếm tra xem số đó có đẹp hay không.  

// Input:
// Dòng đầu tiên ghi số bộ test.
// Mỗi bộ test viết trên một dòng số nguyên dương n không quá 500 chữ số. 
// Output:
// Mỗi bộ test viết ra trên một dòng chữ YES nếu đó là số đẹp, chữ NO nếu ngược lại

// Ví dụ:
// Input:
// 4
// 123456787654321
// 8644281154664511824468
// 8006000444400000000000044440006008
// 82123400000000000000000000000432128
// Output:
// NO
// NO
// YES
// YES

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool check(char a[]);

void main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s[500];
        fgets(s, sizeof(s) + 1, stdin);
        check(s) ? printf("YES\n") : printf("NO\n");
    }
}

bool check(char a[]){
    if(a[0] != '8' || a[strlen(a) - 2] != '8'){
        return false;
    }
    int sum = 0;
    for(int i = 0; i < strlen(a) - 1; i++){
        sum += (a[i] - 48);
    }
    return (sum % 10 == 0) ? true : false;
}