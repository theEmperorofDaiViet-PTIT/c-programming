// TỔNG CÁC SỐ NGUYÊN TỐ THUỘC TAM GIÁC TRÊN

// Viết chương trình nhập ma trận A là ma trận vuông cấp n (không quá 50). Tìm tổng các phần tử là số nguyên tố thuộc tam giác trên.

// INPUT
// - Dòng đầu tiên là cấp của ma trận
// - Các dòng tiếp theo là các phần tử của ma trận
// OUTPUT
// - Ghi ra kết quả của chương trình

// Ví dụ: 
// INPUT
// 4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// OUTPUT
// 23

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i <= j && isPrime(a[i][j])){
                sum += a[i][j];
            }
        }
    }
    printf("%d", sum);
}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    else if(n % 2 == 0){
        if(n == 2)  return true;
        else    return false;
    }
    else{
        for(int i = 3; i <= sqrt(n); i += 2){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}