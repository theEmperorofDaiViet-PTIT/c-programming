// SỐ STRONG NHỎ HƠN N

// Số Strong là số thỏa mãn có tổng giai thừa các chữ số của nó bằng chính nó. Ví dụ: 145 = 1! + 4! + 5!
// Viết chương trình nhập vào số n không quá 9 chữ số và liệt kê các số Strong nhỏ hơn n 
// (Các kết quả thỏa mãn được liệt kê trên một dòng cách nhau một khoảng trống)

// Input:
// Chỉ có một dòng ghi số n.
// Output:
// Ghi ra kết quả tính toán trên một dòng

// Ví dụ:
// Input:
// 1000
// Output:
// 1 2 145

#include<stdio.h>

int checkStrong(int n);
int factorial(int n);

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
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