#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int k;
    scanf("%d", &k);
    int M[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &M[i]);
        M[i]--;
    }
    char road[n];
    for(int i = 0; i < n; i++){
        road[i] = 'D';
    }
    for(int i = 0; i < m; i++){
        for(int j = M[i]; j >= 0 && j >= M[i] - k; j--){
            road[j] = 'L';
        }
        for(int j = M[i]; j < n && j <= M[i] + k; j++){
            road[j] = 'L';
        }
    }
    int add = 0;
    int light = 2 * k + 1;
    for(int i = 0; i < n; i++){
        int blank = 0;
        if(road[i] == 'D'){
            for(int j = i; j < n; j++){
                if(road[j] == 'D'){
                    blank++;
                }
                else{
                    i = j;
                    break;
                }
                if(j == n - 1){
                    i = j;
                    break;
                }
            }
        }
        add += blank / light;
        add = (blank % light > 0) ? add + 1 : add;
    }
    printf("%d", add);
}