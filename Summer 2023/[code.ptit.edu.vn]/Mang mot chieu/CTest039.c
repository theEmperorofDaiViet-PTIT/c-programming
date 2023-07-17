#include<stdio.h>
#include<stdbool.h>

void sort(char a[], int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[18];
        scanf("%s", &a);
        sort(a, 18);
        bool firstDigitChecked = false;
        for(int i = 0; i < 18; i++){
            if(a[i] >= '0' && a[i] <= '9'){
                if(a[i] != '0'){
                    firstDigitChecked = true;
                }
                if(firstDigitChecked){
                    printf("%c", a[i]);
                }
            }
        }
        printf("\n");
        for(int i = 0; i < 18; i++){
            a[i] = 'x';
        }
    }
}

void sort(char a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > tmp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
    }
}