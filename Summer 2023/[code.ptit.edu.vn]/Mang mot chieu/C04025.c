#include<stdio.h>

void sort(int a[], int n);

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int countEven = 0;
    int countOdd = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    int even[countEven];
    int odd[countOdd];
    int indexEven = 0;
    int indexOdd = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            even[indexEven] = a[i];
            indexEven++;
        }
        else{
            odd[indexOdd] = a[i];
            indexOdd++;
        }
    }
    sort(even, countEven);
    sort(odd, countOdd);
    for(int i = 0; i < countEven; i++){
        printf("%d ", even[i]);
    }
    for(int i = 0; i < countOdd; i++){
        printf("%d ", odd[i]);
    }
}

void sort(int a[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int tmp = a[i];
        while(j >= 0 && a[j] > tmp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
    }
}