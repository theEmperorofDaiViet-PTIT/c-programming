// SỐ ĐẸP 1

// Một số được coi là đẹp nếu đó là số thuận nghịch và chỉ toàn các chữ số chẵn. 
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
// 86442824468
// 8006000444422220000222244440006008
// 235365789787654324567856578654356786556
// Output:
// NO
// YES
// YES
// NO

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
    for(int i = 0, j = strlen(a) - 2; i < (strlen(a) - 1) / 2; i++, j--){
        if(a[i] != a[j]){
            return false;
        }
        if(a[i] % 2 != 0 || a[j] % 2 != 0){
            return false;
        }
    }
    return true;
}