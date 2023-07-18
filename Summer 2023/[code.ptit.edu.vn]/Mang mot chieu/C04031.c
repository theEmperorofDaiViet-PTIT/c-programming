#include<stdio.h>
#include<stdbool.h>

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int longestStreak = 0;
        int currentStreak = 1;
        for(int i = 0; i < n;){
            for(int j = i + 1; j < n; j++){
                if(a[j] > a[j - 1]){
                    currentStreak++;
                }
                longestStreak = (longestStreak > currentStreak) ? longestStreak : currentStreak;
                if(j == n - 1){
                    i = n;
                    break;
                }
                if(a[j] <= a[j - 1]){
                    i = j;
                    currentStreak = 1;
                    break;
                }

            }
        }
        printf("Test %d:\n", t);
        printf("%d\n", longestStreak);
        for(int i = 0; i < n;){
            bool ok = true;
            int tmp = i;
            for(int j = tmp + 1; j < tmp + longestStreak; j++){
                if(a[j] <= a[j - 1]){
                    i = j;
                    ok = false;
                    break;
                }
                if(j == n - 1){
                    i = n;
                    break;
                }
                if(j == tmp + longestStreak - 1){
                    i = tmp + longestStreak;
                    break;
                }

            }
            if(ok){
                for(int j = tmp; j < tmp + longestStreak; j++){
                    printf("%d ", a[j]);
                }
                printf("\n");
            }
        }
    }
}