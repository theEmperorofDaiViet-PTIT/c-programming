#include<stdio.h>
#include<stdbool.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;
    bool ok[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        ok[i] = true;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i]){
                ok[i] = false;
                ok[j] = false;
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(ok[i] == true){
            count++;
        }
    }
    printf("%d\n", count);
    for(int i = 0; i < n; i++){
        if(ok[i] == true){
            printf("%d ", a[i]);
        }
    }
}