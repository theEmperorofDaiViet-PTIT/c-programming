#include<stdio.h>

char* check(int a[], int n);

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
        printf(check(a, n));
    }
}

char* check(int a[], int n){
    for(int i = 0, j = n - 1; i < n && j >= 0; i++, j--){
        if(a[i] != a[j])
            return "NO\n";
    }
    return "YES\n";
}