// SỐ THUẬN NGHỊCH KHÔNG CÓ CHỮ SỐ 9

// Viết chương trình nhập vào số N không quá 4 chữ số, thực hiện liệt kê các số thuận nghịch lớn hơn 1 và nhỏ hơn N thỏa mãn không chứa chữ số 9. 
// Có bao nhiêu số như vậy.

// Input
// Chỉ có một dòng ghi số n. 
// Output
// Gồm hai dòng: dòng đầu liệt kê các số thỏa mãn, dòng thứ 2 ghi số lượng các số tìm được.

// Ví dụ:
// Input:
// 100
// Output:
// 2 3 4 5 6 7 8 11 22 33 44 55 66 77 88
// 15

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPalindrome(int n);
bool containNine(int n);

void main(){
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = 2; i < n; i++){
        if(isPalindrome(i) && !containNine(i)){
            count++;
            printf("%d ", i);
        }
    }
    printf("\n%d", count);
}

bool isPalindrome(int n){
    int length = 0;
    while(n / (int) pow(10, length) > 0){
        length++;
    }
    for(int i = 0, j = length - 1; i < length; i++, j--){
        if((n / (int) pow(10, i)) % 10 != (n / (int) pow(10, j)) % 10){
            return false;
        }
    }
    return true;
}

bool containNine(int n){
    while(n > 0){
        if(n % 10 == 9){
            return true;
        }
        n /= 10;
    }
    return false;
}