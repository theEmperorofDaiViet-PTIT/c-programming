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

void createSieve(bool s[]);

void main(){
    bool sieve[101];
    for(int i = 0; i < 101; i++){
        sieve[i] = true;
    }
    createSieve(sieve);
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        long long LCM = 1;
        for(int i = 2; i <= n; i++){
            if(sieve[i] == true){
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

void createSieve(bool s[]){
    s[0] = false;
    s[1] = false;
    for(int i = 2; i * i <= 100; i++){
        if(s[i] == true){
            for(int j = i * i; j <= 100; j += i){
                s[j] = false;
            }
        }
    }
}