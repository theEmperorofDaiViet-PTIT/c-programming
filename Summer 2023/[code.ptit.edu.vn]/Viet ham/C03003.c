// LIỆT KÊ N SỐ NGUYÊN TỐ ĐẦU TIÊN

// Viết chương trình liệt kê N số nguyên tố đầu tiên với N là một số nguyên dương không quá 10^5.

// Input
// Dữ liệu vào chỉ có duy nhất một số N.
// Output
// Kết quả ghi mỗi số nguyên tố trên một dòng, theo thứ tự từ nhỏ đến lớn.

// Ví dụ:
// Input:
// 5
// Output:
// 2
// 3
// 5
// 7
// 11

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int n;
    scanf("%d", &n);
    if(n >= 1){
        printf("%d\n", 2);
    }
    int count = 1;
    int i = 3;
    while(count < n){
        while(true){
            if(isPrime(i)){
                printf("%d\n", i);
                count++;
                i += 2;
                break;
            }
            i += 2;
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