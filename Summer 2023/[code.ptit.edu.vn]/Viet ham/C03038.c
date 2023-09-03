// ƯỚC SỐ CỦA GIAI THỪA

// Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x. 
// Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3^2. 

// Input:
// Dòng đầu tiên đưa vào số lượng bộ test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là cặp số N, p được viết cách nhau một vài khoảng trống.
// T, N, p thỏa mãn ràng buộc : 1 ≤ T ≤ 100; 1 ≤ N ≤ 10^5; 2 ≤ p ≤ 5000;
// Output:
// Đưa ra kết quả mỗi test theo từng dòng.

// Ví dụ:
// Input:
// 3
// 62  7
// 76  2
// 3  5
// Output:
// 9
// 73
// 0

#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, p;
        scanf("%d %d", &n, &p);
        int count = 0;
        for(int i = p; i <= n; i += p){
            int cnt = 0;
            int tmp = i;
            while(tmp % p == 0 && tmp / p >= 1){
                cnt++;
                tmp /= p;
            }
            count += cnt;
        }
        printf("%d\n", count);
    }
}