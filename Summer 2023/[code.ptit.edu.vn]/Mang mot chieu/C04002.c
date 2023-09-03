// SỐ NGUYÊN TỐ TRONG DÃY

// Viết chương trình in ra các số nguyên tố trong một dãy số cho trước.

// Input: 
// Dòng đầu ghi số bộ test. 
// Mỗi test gồm 2 dòng, dòng đầu ghi số N là số phần tử của dãy. 
// Dòng sau ghi N số của dãy. N không quá 100, các số trong dãy đều nguyên dương và không quá 1000.
// Output: 
// Với mỗi bộ test ghi trên một dòng lần lượt là các số nguyên tố của dãy số ban đầu, theo thứ tự xuất hiện.

// Ví dụ:
// Input:
// 1
// 5
// 1 2 3 4 5
// Output:
// 2 3 5

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            int k;
            scanf("%d", &k);
            if(isPrime(k))
                printf("%d ", k);
        }
        printf("\n");
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