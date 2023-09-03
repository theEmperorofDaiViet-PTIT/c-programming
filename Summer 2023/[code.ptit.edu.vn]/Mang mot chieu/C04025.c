// SẮP XẾP CHẴN LẺ

// Viết chương trình nhập vào mảng A gồm n phần tử (1 < n < 100). 
// Thực hiện sắp xếp tăng dần các phần tử chẵn và lẻ của mảng và In ra.

// Trong đó:
// INPUT
// Hàng thứ nhất là số phần tử n của mảng A
// Hàng thứ hai là các phần tử của mảng A
// OUTPUT
// Mảng kết quả in lần lượt dãy số chẵn sau đó đến dãy số lẻ. 

// Ví dụ:
// INPUT
// 8
// 1 3 8 2 9 7 6 5
// OUTPUT
// 2 6 8 1 3 5 7 9

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