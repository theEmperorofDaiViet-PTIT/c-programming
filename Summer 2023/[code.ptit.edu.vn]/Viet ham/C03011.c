// SỐ STRONG TRONG ĐOẠN

// Viết chương trình C cho phép nhập vào hai số a và b (a có thể lớn hơn b). Liệt kê các sô Strong nằm trong đoạn a, b.
// Các kết quả thỏa mãn liệt kê cách nhau một khoảng trống.

// Input:
// Chỉ có một dòng ghi hai số a, b.
// Output:
// Ghi ra kết quả tính toán trên một dòng

// Ví dụ:
// Input:
// 1 1000
// Output:
// 1 2 145

#include<stdio.h>

int checkStrong(int n);
int factorial(int n);

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int tmp = a;
    a = (a < b) ? a : b;
    b = (tmp < b) ? b : tmp;
    for(int i = a; i <= b; i++){
        if(checkStrong(i) == 1)
            printf("%d ", i);
    }
}

int checkStrong(int n){
    int tmp = n;
    int sum = 0;
    while(n > 0){
        sum += factorial(n % 10);
        n /= 10;
    }
    if(sum == tmp && tmp > 0)
        return 1;
    else
        return 0;
}

int factorial(int n){
    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}