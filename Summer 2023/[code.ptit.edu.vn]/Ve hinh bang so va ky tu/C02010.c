#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int arr[b];
    for(int i = 0; i < b; i++){
        arr[i] = i + 1;
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d", arr[j]);
        }
        if(i < b - 1){
            int tmp = arr[0];
            for(int j = 0; j < b - i - 1; j++){
                arr[j] = arr[j + 1];
            }
            arr[b - i - 1] = tmp;
        }
        else{
            arr[0]++;
        }
        printf("\n");
    }
}