// ĐẾM SỐ LẦN XUẤT HIỆN 2

// Cho dãy số A có n phần tử chỉ bao gồm các số nguyên dương (không quá 105). 
// Hãy đếm xem mỗi số xuất hiện bao nhiêu lần.      

// Input: 
// Dòng đầu tiên ghi số bộ test. 
// Với mỗi bộ test: dòng đầu ghi số n (không quá 100); dòng tiếp theo ghi n số của dãy.
// Output: 
// Với mỗi bộ test ghi ra thứ tự bộ test, sau đó lần lượt là các số nguyên tố trong dãy theo thứ tự xuất hiện trong dãy và số lần xuất hiện của nó.    

// Ví dụ:
// Input:
// 1
// 10
// 1 7 2 8 3 3 2 1 3 2
// Output:
// Test 1:
// 1 xuat hien 2 lan
// 7 xuat hien 1 lan
// 2 xuat hien 3 lan
// 8 xuat hien 1 lan
// 3 xuat hien 3 lan

#include<stdio.h>
#include<stdbool.h>

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
            if(checked[i] == true){
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
        printf("Test %d:\n", t);
        for(int i = 0; i < n; i++){
            if(count[i] > 0){
                printf("%d xuat hien %d lan\n", a[i], count[i]);
            }
        }
    }
}