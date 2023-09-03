// PHÂN TÍCH THỪA SỐ NGUYÊN TỐ 3

// Hãy phân tích một số nguyên dương thành tích các thừa số nguyên tố.   

// Input
// Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương n không quá 9 chữ số.
// Output
// Mỗi bộ test viết ra thứ tự bộ test, sau đó lần lượt là các số nguyên tố khác nhau có trong tích, với mỗi số viết thêm số lượng số đó. 
// Xem ví dụ để hiểu rõ hơn về cách viết kết quả.

// Ví dụ:
// Input:
// 3
// 60
// 128
// 10000
// Output:
// Test 1: 2(2) 3(1) 5(1)
// Test 2: 2(7)
// Test 3: 2(4) 5(4)

#include<stdio.h>
#include<math.h>

void primeFactorization(int n);

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n;
        scanf("%d", &n);
        printf("Test %d: ", t);
        primeFactorization(n);
    }

}

void primeFactorization(int n){
    if(n % 2 == 0){
        int count = 0;
        printf("%d", 2);
        while(n % 2 == 0 & n / 2 >= 1){
            count++;
            n /= 2;
        }
        printf("(%d) ", count);
    }
    for(int i = 3; i <= sqrt(n); i += 2){
        if(n % i == 0){
            int count = 0;
            printf("%d", i);
            while(n % i == 0 & n / i >= 1){
                count++;
                n /= i;
            }
            printf("(%d) ", count);
        }
    }
    if(n > 2){
        printf("%d(1)", n);
    }
    printf("\n");
}