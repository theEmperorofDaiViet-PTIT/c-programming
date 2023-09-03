// CHỮ SỐ 4

// Nam rất ghét chữ số 4 nên không muốn xuất hiện chữ số 4 trong các số may mắn của mình. 
// Dãy số may mắn của Nam có N chữ số và phải thỏa mãn tính chất thuận nghịch, tổng chữ số phải chia hết cho 10.
// Cho số N, hãy liệt kê các số may mắn của Nam với đúng N chữ số.

// Input
// Dòng đầu ghi số bộ test
// Mỗi bộ test ghi số N (1 < N < 7)
// Output
// Với mỗi bộ test, ghi ra lần lượt các số may mắn có N chữ số, các số cách nhau một khoảng trống.
// Hết một bộ test thì xuống dòng.

// Ví dụ:
// Input:
// 2
// 2
// 3
// Output:
// 55
// 181 262 505 686 767 929

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPalindrome(int n);
bool sumDigitsDivisibleBy10(int n);
bool containFour(int n);
bool check(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i = (int) pow(10, n - 1); i < (int) pow(10, n); i++){
            if(check(i)){
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}

bool check(int n){
    return isPalindrome(n) && sumDigitsDivisibleBy10(n) && !containFour(n);
}

bool isPalindrome(int n){
    int length = 0;
    while(n / (int) pow(10, length) > 0){
        length++;
    }
    for(int i = 0, j = length - 1; i < length; i++, j--){
        if((n / (int) pow(10, i)) % 10 != (n / (int) pow(10, j)) % 10){
            return false;
        }
    }
    return true;
}

bool sumDigitsDivisibleBy10(int n){
    int sum = 0;
    while(n > 0){
        sum += (n % 10);
        n /= 10;
    }
    return sum % 10 == 0;
}

bool containFour(int n){
    while(n > 0){
        if(n % 10 == 4){
            return true;
        }
        n /= 10;
    }
    return false;
}