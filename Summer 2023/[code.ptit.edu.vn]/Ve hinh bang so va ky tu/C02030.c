#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    char arr[n];
    arr[0] = '@';
    for(int i = 1; i < n; i++){
        arr[i] = 64 + 2 * i;
    }

    for(int i = 1, k = 1; i <= n; i++, k += 2){
        for(int j = 1, l = 0; j <= k / 2 + 1; j++, l++){
            printf("%c", arr[l]);
        }
        for(int j = k / 2 + 2, l = i - 2; j <= k; j++, l--){
            printf("%c", arr[l]);
        }
        printf("\n");
    }
}