// ĐẾM CÁC SỐ NGUYÊN TỐ TRONG DÃY

// Cho dãy số A có n phần tử chỉ bao gồm các số nguyên dương (không quá 105). 
// Hãy xác định các số nguyên tố trong dãy và đếm xem mỗi số xuất hiện bao nhiêu lần.      

// Input: 
// Dòng đầu tiên ghi số bộ test. 
// Với mỗi bộ test: dòng đầu ghi số n (không quá 100); dòng tiếp theo ghi n số của dãy.
// Output: 
// Với mỗi bộ test ghi ra thứ tự bộ test, sau đó lần lượt là các số nguyên tố trong dãy theo thứ tự từ nhỏ đến lớn và số lần xuất hiện của nó.    

// Ví dụ:
// Input:
// 1
// 10
// 1 7 2 8 3 3 2 1 3 2
// Output:
// Test 1:
// 2 xuat hien 3 lan
// 3 xuat hien 3 lan
// 7 xuat hien 1 lan

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n);
void* sort(int a[], int count[], int n);

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n;
        scanf("%d", &n);
        int a[n], count[n];
        bool checked[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            count[i] = 0;
            checked[i] = false;
        }

        for(int i = 0; i < n; i++){
            if(isPrime(a[i]) == false || checked[i] == true){
                continue;
            }
            count[i]++;
            for(int j = i + 1; j < n; j++){
                if(a[j] == a[i]){
                    count[i]++;
                    checked[i] = true;
                    checked[j] = true;
                }
            }
        }
        sort(a, count, n);
        printf("Test %d:\n", t);
        for(int i = 0; i < n; i++){
            if(count[i] > 0){
                printf("%d xuat hien %d lan\n", a[i], count[i]);
            }
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

void* sort(int a[], int count[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int tmp1 = a[i];
        int tmp2 = count[i];
        while(a[j] > tmp1 && j >= 0){
            a[j + 1] = a[j];
            count[j + 1] = count[j];
            j--;
        }
        a[j + 1] = tmp1;
        count[j + 1] = tmp2;
    }
}