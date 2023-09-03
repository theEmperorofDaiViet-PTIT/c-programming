// BỘI SỐ NHỎ NHẤT CỦA N SỐ NGUYÊN DƯƠNG ĐẦU TIÊN

// Cho số tự nhiên n. Nhiệm vụ của bạn là tìm số nguyên dương nhỏ nhất chia hết cho 1, 2, ..., n.

// Input:
// Dòng đầu tiên đưa vào T là số lượng bộ test.
// T dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là một số tự nhiên n.
// T thỏa mãn ràng buộc: 1 ≤ T ≤ 10^4; n không quá 100.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.

// Ví dụ:
// Input:
// 2
// 3
// 5
// Output:
// 6
// 60

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
        long long LCM = 1;
        for(int i = 2; i <= n; i++){
            if(isPrime(i)){
                int pp = i;
                while(pp * i <= n){
                    pp *= i;
                }
                LCM *= pp;
            }
        }
        printf("%lld\n", LCM);
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