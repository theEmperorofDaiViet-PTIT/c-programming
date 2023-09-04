// SỐ NGUYÊN TỐ

// Viết chương trình kiểm tra một số nguyên dương có phải số nguyên tố hay không.

// Input
// Dòng đầu của dữ liệu vào ghi số bộ test. Mỗi dòng tiếp theo có một nguyên dương không quá 9 chữ số.
// Output
// Kết quả in ra YES nếu đó là số nguyên tố, in ra NO nếu ngược lại.

// Ví dụ:
// Input:
// 3
// 123456
// 997
// 111111111
// Output:
// NO
// YES
// NO

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        isPrime(n) ? printf("YES\n") : printf("NO\n");
    }
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