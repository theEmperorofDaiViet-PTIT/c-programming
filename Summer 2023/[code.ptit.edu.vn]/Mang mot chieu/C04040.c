// DÃY CON LIÊN TIẾP CÓ TỔNG LỚN NHẤT

// Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là hãy tìm một dãy con liên tiếp sao cho tổng các phần tử của chúng là lớn nhất.

// Input: 
// Dòng đầu tiên là số lượng bộ test T (T ≤ 10). 
// Mỗi test gồm số nguyên N (1 ≤ N ≤ 100 000), số lượng phần tử trong dãy số ban đầu. 
// Dòng tiếp theo gồm N số nguyên A[i] (-10^9 ≤ A[i] ≤ 10^9).
// Output: 
// Với mỗi test, in ra một số nguyên là đáp án của bài toán trên một dòng.

// Ví dụ:
// Input:
// 2
// 8
// -2 -3 4 -1 -2 1 5 -3
// 5
// 1 2 3 4 5
// Output:
// 7
// 15
// Giải thích test 1: 4 + (-1) + (-2) + 1 + 5 = 7

#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        long long max = 0;
        long long sum = 0;
        for(int i = 0; i < n; i++){
            if(sum + a[i] < 0){
                sum = 0;
            }
            else{
                sum += a[i];
            }
            max = (max > sum) ? max : sum;
        }
        
        printf("%lld\n", max);
    }
}