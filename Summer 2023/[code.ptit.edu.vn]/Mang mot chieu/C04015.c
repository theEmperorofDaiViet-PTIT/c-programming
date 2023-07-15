#include<stdio.h>
#include<stdbool.h>

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
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
        printf("Test %d:\n", t);
        for(int i = 0; i < n; i++){
            if(count[i] > 0){
                printf("%d xuat hien %d lan\n", a[i], count[i]);
            }
        }
    }
}