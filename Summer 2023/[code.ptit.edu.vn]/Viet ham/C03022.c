// TỔNG CHỮ SỐ CHIA HẾT CHO 5

// Viết chương trình nhập vào số nguyên dương n không quá 5 chữ số. 
// Thực hiện liệt kê các số nguyên tố nhỏ hơn n và thỏa mãn có tổng các chữ số chia hết cho 5. Có bao nhiêu số như vậy.

// Input
// Chỉ có một dòng ghi số n.
// Output
// Gồm hai dòng: dòng đầu liệt kê các số thỏa mãn, dòng thứ 2 ghi số lượng các số tìm được.

// Ví dụ:
// Input:
// 100
// Output:
// 5 19 23 37 41 73
// 6

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);
bool check(int n);

void main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 3; i < n; i += 2){
        if(check(i)){
            count++;
            printf("%d ", i);
        }
    }
    printf("\n%d", count);
}

bool check(int n){
    int sum = 0;
    int tmp = n;
    while(tmp > 0){
        sum += (tmp % 10);
        tmp /= 10;
    }
    return sum % 5 == 0 && isPrime(n);
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