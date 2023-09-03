// BỘI SỐ NHỎ NHẤT

// Cho hai số tự nhiên n, m. Nhiệm vụ của bạn là tìm số nguyên nhỏ nhất chia hết cho n, n + 1, ..., m.

// Input:
// Dòng đầu tiên đưa vào T là số lượng bộ test.
// T dòng tiếp theo mỗi dòng đưa vào một bộ test. Mỗi bộ test là 2 số tự nhiên n, m.
// T thỏa mãn ràng buộc: 1 ≤ T ≤ 10^4; 1 ≤ n, m ≤ 40
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.

// Ví dụ:
// Input:
// 2
// 1 3
// 3 5
// Output:
// 6
// 60

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void main(){
    int exponent[101];
    int t;
    scanf("%d", &t);
    while(t--){
        for(int i = 0; i < 101; i++){
            exponent[i] = 0;
        }
        int n, m;
        scanf("%d %d", &n, &m);
        int temp = n;
        n = (n <= m) ? n : m;
        m = (temp <= m) ? m : temp;
        long long LCM = 1;
        for(int i = n; i <= m; i++){
            int tmp = i;
            if(tmp % 2 == 0){
                int count = 0;
                while(tmp % 2 == 0 & tmp / 2 >= 1){
                    count++;
                    tmp /= 2;
                }
                exponent[2] = (exponent[2] < count) ? count : exponent[2];
            }
            for(int j = 3; j <= sqrt(tmp); j += 2){
                if(tmp % j == 0){
                    int count = 0;
                    while(tmp % j == 0 & tmp / j >= 1){
                        count++;
                        tmp /= j;
                    }
                exponent[j] = (exponent[j] < count) ? count : exponent[j];
                }
            }
            if(tmp > 2){
                exponent[tmp] = (exponent[tmp] < 1) ? 1 : exponent[tmp];
            }

        }
        for(int i = 2; i <= 100; i++){
            if(exponent[i] > 0){
                LCM *= pow(i, exponent[i]);
            }
        }
        printf("%lld\n", LCM);
    }
}