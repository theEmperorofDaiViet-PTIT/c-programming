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