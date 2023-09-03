// SỐ ĐỨNG ĐẦU

// Cho dãy số A[] gồm có N phần tử. Một phần tử được gọi là số đứng đầu nếu như nó lớn hơn tất cả các phần tử nằm bên phải của nó.
// Nhiệm vụ của bạn là hãy tìm các số đứng đầu trong dãy số A[] đã cho.

// Input:
// Dòng đầu tiên là số lượng bộ test T (T ≤ 10).
// Mỗi test gồm số nguyên N (1 ≤ N ≤ 1000), số lượng phần tử trong dãy số ban đầu.
// Dòng tiếp theo gồm N số nguyên A[i] (0 ≤ A[i] ≤ 106).
// Output:
// Với mỗi test, in ra trên một dòng các số tìm được, in ra theo thứ tự giảm dần.

// Ví dụ:
// Input:
// 1
// 6
// 16 17 4 3 5 2
// Output:
// 17 5 2

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
        for(int i = 0; i < n; i++){
            int max = -1;
            for(int j = n - 1; j > i; j--){
                if(a[j] > max){
                    max = a[j];
                }
            }
            (a[i] > max) ? printf("%d ", a[i]) : printf("");
        }
        printf("\n");
    }
}