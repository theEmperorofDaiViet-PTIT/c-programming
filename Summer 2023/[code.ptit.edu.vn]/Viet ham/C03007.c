// VỪA NGUYÊN TỐ VỪA THUẬN NGHỊCH

// Viết chương trình liệt kê các số vừa nguyên tố, vừa thuận nghịch trong đoạn [a,b] với a, b là các số nguyên dương thỏa mãn 10 < a < b < 10^6.

// Input
// Dòng đầu ghi số bộ test. Mỗi bộ test là một cặp số a, b.
// Output
// Với mỗi bộ test, ghi lần lượt các số thỏa mãn, mỗi số cách nhau một khoảng trống, mỗi dòng ghi đúng 10 số. 
// Khi hết một test thì bỏ trống một dòng trước khi ghi kết quả test tiếp theo.

// Ví dụ:
// Input:
// 2
// 20 1234
// 123 140
// Output:
// 101 131 151 181 191 313 353 373 383 727
// 757 787 797 919 929

// 131

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<string.h>

bool check(int n);
bool isPrime(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        a = (a % 2 == 0) ? a + 1 : a;
        int count = 0;
        for(int i = a; i <= b; i += 2){
            if(check(i) && isPrime(i)){
                printf("%d ", i);
                count++;
            }
            if(count == 10){
                printf("\n");
                count = 0;
            }
        }
        printf("\n");
    }
}

bool check(int n){
    int length = 0;
    while(n / (int) pow(10, length) > 0){
        length++;
    }
    char s[length];
    int i = length;
    while(n > 0){
        s[i - 1] = n % 10;
        n /= 10;
        i--;
    }
    for(int i = 0; i < length / 2; i++){
        if(s[i] != s[length - i - 1]){
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