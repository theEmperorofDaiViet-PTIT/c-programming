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