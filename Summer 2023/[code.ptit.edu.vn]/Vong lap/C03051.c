// SỐ CHỈ CÓ BA ƯỚC SỐ

// Cho hai số L, R. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số trong khoảng [L, R]. 
// Ví dụ L = 1, R = 10, ta có kết quả là 2 vì chỉ có số 4 và 9 là có đúng 3 ước số. 
// Input:
// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là cặp số L, R.
// T, N thỏa mãn rang buộc 1 ≤ T ≤ 100; 1 ≤ L, R ≤ 10^12. 
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.

// Ví dụ:
// Input:
// 2
// 1 10
// 1 1000000000000
// Output:
// 2
// 78498

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long l, r;
        scanf("%lld %lld", &l, &r);
        int count = 0;
        if(l > r){
            printf("%d\n", 0);
            continue;
        }
        if(sqrt(l) <= 2) count++;
        long long i = (ceil(sqrt(l)) > 3) ? ceil(sqrt(l)): 3;
        for(; i <= sqrt(r); i += 2){
            if(isPrime(i)){
                count++;
            }
        }
        printf("%d\n", count);
    }

}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    if(n % 2 == 0){
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