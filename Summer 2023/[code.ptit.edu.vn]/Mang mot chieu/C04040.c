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