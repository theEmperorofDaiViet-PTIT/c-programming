// ĐẾM SỐ NGUYÊN TỐ

// Viết chương trình đếm xem trong đoạn [a,b] có bao nhiêu số là số nguyên tố và tất cả các chữ số của nó cũng là số nguyên tố.

// Input
// Dòng đầu ghi số bộ test
// Mỗi bộ test ghi 2 số a, b (1 < a < b < 10^6)
// Output
// Với mỗi bộ test, ghi ra số lượng số thỏa mãn trên một dòng.

// Ví dụ:
// Input:
// 2
// 10 100
// 1234 5678
// Output:
// 4
// 26

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);
bool check(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int count = 0;
        if(a <= 2){
            count++;
        }
        a = (a % 2 == 0) ? a + 1 : a;
        for(int i = a; i <= b; i += 2){
            if(check(i)){
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

bool check(int n){
    if(!isPrime(n))
        return false;
    while(n > 0){
        if(!isPrime(n % 10)){
            return false;
        }
        n /= 10;
    }
    return true;
}