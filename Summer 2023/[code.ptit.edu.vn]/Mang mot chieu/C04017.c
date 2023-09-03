// LIỆT KÊ SỐ NGUYÊN TỐ TRONG DÃY

// Viết chương trình nhập mảng n (1 < n < 100) phần tử số nguyên dương. Các giá trị trong mảng không quá 1000.
// Đếm các phần tử là số nguyên tố trong mảng và in ra lần lượt theo thứ tự xuất hiện.

// Input
// Dòng 1 ghi số n. Dòng 2 ghi n số của mảng.
// Output
// Ghi số lượng các số nguyên tố, sau đó lần lượt là các số nguyên tố theo thứ tự xuất hiện.

// Ví dụ:
// Input:
// 6
// 1 5 3 19 18 25
// Output:
// 3 5 3 19

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n);

void main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(isPrime(a[i])){
            count++;
        }
    }
    printf("%d ", count);
    for(int i = 0; i < n; i++){
        if(isPrime(a[i])){
            printf("%d ", a[i]);
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