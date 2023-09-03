// SỐ GIẢM

// Một số gọi là số giảm nếu các chữ số từ trái qua phải tạo thành dãy giảm (tức là chữ số phía sau nhỏ hơn chữ số ngay trước). 
// Viết chương trình đếm các số giảm có trong đoạn [a,b].  

// Input
// Dòng đầu ghi số bộ test
// Mỗi bộ test ghi 2 số a, b (1 < a < b < 10^8)
// Output
// Với mỗi bộ test, ghi ra số lượng các số giảm đếm được.

// Ví dụ:
// Input:
// 1
// 10 100
// Output:
// 45

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

bool check(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int count = 0;
        for(int i = a; i <= b; i++){
            if(check(i)){
                count++;
            }
        }
        printf("%d\n", count);
    }

}

bool check(int n){
    while(n / 10 > 0){
        if(n % 10 >= n / 10 % 10){
            return false;
        }
        n /= 10;
    }
    return true;
}