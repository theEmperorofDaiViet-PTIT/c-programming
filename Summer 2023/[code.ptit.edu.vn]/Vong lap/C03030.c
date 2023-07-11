#include<stdio.h>

// Combination Repetition

void generate(int chosen[], int arr[], int index, int n, int start, int end);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int chosen[n + 1];
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        generate(chosen, arr, 0, n, 0, 8);
        printf("\n");
    }


}

void generate(int chosen[], int arr[], int index, int n, int start, int end){
    if(index == n){
        for(int i = 0; i < n; i++){
            printf("%d", arr[chosen[i]]);
        }
        printf(" ");
        return;
    }

    for(int i = start; i <= end; i++){
        chosen[index] = i;
        generate(chosen, arr, index + 1, n, i, end);
    }
    return;
}