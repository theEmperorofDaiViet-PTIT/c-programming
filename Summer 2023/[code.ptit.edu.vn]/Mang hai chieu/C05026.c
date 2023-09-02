// TÌM HÀNG NHIỀU SỐ NGUYÊN TỐ NHẤT

// Viết chương trình nhập vào ma trận vuông cấp n (1 < n < 30) chỉ bao gồm các số nguyên dương không quá 1000.
// Thực hiện tìm hàng có nhiều phần tử là số nguyên tố nhất. Nếu có nhiều hơn một hàng thỏa mãn thì in ra hàng đầu tiên.

// INPUT
// - Dòng đầu tiên là cấp của ma trận
// - Các dòng tiếp theo là các phần tử của ma trận
// OUTPUT
// - Dòng đầu tiên là số thứ tự hàng thỏa mãn
// - Dòng thứ hai liệt kê các phần tử thỏa mãn

// Ví dụ:
// INPUT
// 4
// 8 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
// OUTPUT
// 1
// 2 3

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    int max = 0;
    int index = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(isPrime(a[i][j])){
                count++;
            }
        }
        if(count > max){
            max = count;
            index = i;
        }
    }
    printf("%d\n", index + 1);
    for(int i = 0; i < n; i++){
        if(isPrime(a[index][i])){
            printf("%d ", a[index][i]);
        }
    }    
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