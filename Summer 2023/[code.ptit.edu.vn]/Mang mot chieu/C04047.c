#include<stdio.h>

void sort(int a[], int b[], int n);

void main(){
    int n;
    scanf("%d", &n);
    int res = 0;
    int startAt[n];
    int period[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &startAt[i], &period[i]);
    }
    sort(startAt, period, n);
    res = 0;
    for(int i = 0; i < n; i++){
        if(startAt[i] < res){
            startAt[i] = res;
        }
        res += (startAt[i] - res) + period[i];        
    }
    printf("%d", res);
}

void sort(int a[], int b[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int tmp1 = a[i];
        int tmp2 = b[i];
        while(j >= 0 && a[j] > tmp1){
            a[j + 1] = a[j];
            b[j + 1] = b[j];
            j--;
        }
        a[j + 1] = tmp1;
        b[j + 1] = tmp2;
    }
}