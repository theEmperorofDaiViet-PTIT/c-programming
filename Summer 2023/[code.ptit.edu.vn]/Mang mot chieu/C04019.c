#include<stdio.h>
#include<stdbool.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int a[n];
        bool checked[n];
        int count[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            checked[i] = false;
            count[i] = 0;
        }
        for(int i = 0; i < n; i++){
            if(checked[i] == false){
                count[i]++;
            }
            else{
                continue;
            }
            for(int j = i + 1; j < n; j++){
                if(a[j] == a[i]){
                    checked[i] = true;
                    checked[j] = true;
                    count[i]++;
                }
            }
        }
        int max = 0;
        for(int i = 0; i < n; i++){
            if(count[i] > max){
                max = count[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(count[i] == max){
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
}