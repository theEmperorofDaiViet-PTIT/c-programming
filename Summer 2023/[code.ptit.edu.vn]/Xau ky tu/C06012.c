// SỐ ĐẸP 3

// Một số được coi là đẹp nếu đó là số thuận nghịch và chỉ toàn các chữ số nguyên tố. 
// Viết chương trình đọc vào các số nguyên dương có không quá 500 chữ số và kiếm tra xem số đó có đẹp hay không.  

// Input:
// Dòng đầu tiên ghi số bộ test.
// Mỗi bộ test viết trên một dòng số nguyên dương n không quá 500 chữ số.
// Output:
// Mỗi bộ test viết ra trên một dòng chữ YES nếu đó là số đẹp, chữ NO nếu ngược lại

// Ví dụ:
// Input:
// 3
// 123456787654321
// 235755557532
// 2222333355557777235775327777555533332222
// Output:
// NO
// YES
// YES

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

bool check(char a[]);
bool isPrime(int n);

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
    for(int i = 0, j = strlen(a) - 2; i < (strlen(a) - 1) / 2 + 1; i++, j--){
        if(a[i] != a[j]){
            return false;
        }
        if(!isPrime(a[i] - 48) || !isPrime(a[j] - 48)){
            return false;
        }
    }
    return true;
}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    else if(n % 2 == 0){
        if(n == 2)  return true;
        else    return false;
    }
    else{
        for(int i = 3; i <= sqrt(n); i += 2){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}