#include<stdio.h>
#include<stdbool.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n], count[n];
    bool checked[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        count[i] = 0;
        checked[i] = false;
    }

    for(int i = 0; i < n; i++){
        if(checked[i] == true){
            continue;
        }
        count[i]++;
        for(int j = i + 1; j < n; j++){
            if(a[j] == a[i]){
                count[i]++;
                checked[i] = true;
                checked[j] = true;
            }
        }
    }
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(count[i] > 1){
            dem++;
        }
    }
    printf("%d\n", dem);
    for(int i = 0; i < n; i++){
        if(count[i] > 1){
            printf("%d ", a[i]);
        }
    }
}