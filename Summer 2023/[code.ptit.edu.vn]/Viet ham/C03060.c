// CHIA HẾT

// Cho hai số nguyên dương n và k. Hãy kiểm tra xem giai thừa của n (n!) có chia hết cho 2^k hay không.

// Input
// Có một dòng ghi 2 số n và k (1 ≤ n, k ≤ 100).
// Output
// Nếu n! chia hết cho 2^k thì in ra “Yes”, ngược lại in ra “No”.

// Ví dụ:
// Input:
// 5 3
// Output:
// Yes

// Input:
// 1 1
// Output:
// No

#include<stdio.h>

void main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int count = 0;
    for(int i = 2, j = 1; i <= n; i += 2, j++){
        int cnt = 0;
        int tmp = i;
        while(tmp % 2 == 0 & tmp / 2 >= 1){
            cnt++;
            tmp /= 2;
        }
        count += cnt;
    }
    (count >= k) ? printf("Yes") : printf("No");
}