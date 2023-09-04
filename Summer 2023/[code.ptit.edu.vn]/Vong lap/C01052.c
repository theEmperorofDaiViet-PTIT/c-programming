// ƯỚC SỐ CHIA HẾT CHO 2

// Cho số nguyên dương N. Nhiệm vụ của bạn là hãy xác định xem có bao nhiêu ước số của N chia hết cho 2? 

// Input:
// Dòng đầu tiên là số lượng bộ test T (T ≤ 100). 
// Mỗi bộ test gồm một số nguyên N (1 ≤ N ≤ 10^9) 
// Output:
// Với mỗi test, in ra đáp án tìm được trên một dòng.

// Ví dụ:
// Input:
// 2
// 9
// 8
// Output:
// 0
// 3

#include<stdio.h>
#include<math.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int count = 0;
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                if(i % 2 == 0){
                    count++;
                }
                if(n / i % 2 == 0 && n / i != i){
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
}