#include<stdio.h>
#include<stdbool.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    bool no = true;
    bool checked[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        checked[i] = false;
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i]){
                if(checked[i] == false){
                    printf("%d ", a[j]);
                }
                checked[i] = true;
                checked[j] = true;
                no = false;
            }
        }
    }
    if(no) printf("%d", 0);
}