// CẶP SỐ NGUYÊN TỐ

// Cho số nguyên dương chẵn N > 2. Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng N. 
// Ví dụ N = 6 ta có 1 cặp số nguyên tố là 3 + 3 = 6.

// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số chẵn N.
// T, N thỏa mãn ràng buộc : 1 ≤ T ≤100; 4 ≤ N ≤ 10000.
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.

// Ví dụ:
// Input:
// 2
// 6
// 32
// Output:
// 3 3
// 3 29 13 19

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
        if(isPrime(n - 2)){
            printf("%d %d ", 2, n - 2);
        }
        for(int i = 3; i <= n / 2; i += 2){
            if(isPrime(i) && isPrime(n - i)){
                printf("%d %d ", i, n - i);
            }
        }
        printf("\n");
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