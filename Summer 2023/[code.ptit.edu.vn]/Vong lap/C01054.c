// TỔNG ƯỚC SỐ

// Cho N số nguyên. Nhiệm vụ của bạn là phân tích các số nguyên đã cho dưới dạng tích của các thừa số nguyên tố, sau đó tính tổng các ước số nguyên tố này.

// Input:
// Dòng đầu tiên số nguyên N (1 ≤ N ≤ 10^6).
// N dòng tiếp theo, mỗi dòng gồm một số nguyên có giá trị không vượt quá 2*10^6.
// Output: 
// In ra một số nguyên là đáp án tìm được.

// Ví dụ:
// Input:
// 5
// 7
// 9
// 10
// 13
// 100
// Output:
// 47

#include<stdio.h>
#include<math.h>

long long calculate(int n);

void main(){
    int t;
    scanf("%d", &t);
    long long sum = 0;
    while(t--){
        int n;
        scanf("%d", &n);
        sum += calculate(n);
    }
    printf("%lld", sum);
}

long long calculate(int n){
    long long sum = 0;
    if(n % 2 == 0){
        while(n % 2 == 0 & n / 2 >= 1){
            sum += 2;
            n /= 2;
        }
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            while(n % i == 0 & n / i >= 1){
                sum += i;
                n /= i;
            }
        }
    }
    if(n > 2){
        sum += n;
    }
    return sum;
}