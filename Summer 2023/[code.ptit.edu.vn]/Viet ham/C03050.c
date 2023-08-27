#include<stdio.h>
#include<stdbool.h>

bool check(int arr[], int n);

void main(){
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for(int i = 1; i <= n; i++){
        arr[i] = 0;
    } 
    for(int i = 1; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a]++;
        arr[b]++;
    }
    
    (check(arr, n)) ? printf("Yes") : printf("No");
}

bool check(int arr[], int n){
    for(int i = 1; i <= n; i++){
        if(arr[i] >= n - 1){
            return true;
        }
    }
    return false;
}