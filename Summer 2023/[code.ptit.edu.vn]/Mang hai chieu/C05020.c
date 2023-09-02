// MA TRẬN XOẮN ỐC FIBONACCI

// Ma trận xoáy ốc Fibonacci cấp N là ma trận vuông có N*N phần tử. 
// Các số được điền vào ma trận theo chiều kim đồng hồ đều là các số thuộc dãy Fibonacci từ nhỏ đến lớn (tính từ số 0).
// Viết chương trình nhập N (không quá 9) và in ra ma trận xoắn ốc Fibonacci tương ứng.

// Ví dụ:
// INPUT
// 3
// OUTPUT
// 0 1 1
// 13 21 2
// 8 5 3

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    int i = 0, j = 0, f1 = 1, f2 = 0, count = 0;
    char direction = 'R';
    int max = n, min = 0;
    while(count < n * n){
        a[i][j] = f2;
        count++;
        f2 = (f2 == 0) ? 1 : f1 + f2;
        f1 = a[i][j];
        if(i < max - 1 && j == max - 1){
            direction = 'D';
        }
        else if(i == max - 1 && j == max - 1){
            direction = 'L';
        }
        else if(i == max - 1 && j == min){
            direction = 'U';
        }
        else if(i == min + 1 && j == min){
            direction = 'R';
            min++;
            max--;
        }
        switch (direction){
            case 'R':
                j++;
                break;
            
            case 'D':
                i++;
                break;
            case 'L':
                j--;
                break;
            case 'U':
                i--;
                break;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}