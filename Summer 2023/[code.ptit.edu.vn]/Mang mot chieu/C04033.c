#include<stdio.h>
#include<stdbool.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    bool checked[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        checked[i] = false;
    }

    for(int i = 0; i < n; i++){
        if(checked[i] == true){
            continue;
        }
        printf("%d ", a[i]);
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i]){
                checked[i] = true;
                checked[j] = true;
            }
        }
    }

}