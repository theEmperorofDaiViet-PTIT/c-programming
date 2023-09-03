// ĐOẠN TĂNG DÀI NHẤT

// Một đoạn tăng trong một dãy số nguyên là một đoạn liên tiếp trong dãy sao cho phần từ phía sau lớn hơn phần từ phía trước. 
// Cho dãy số với n phần tử (n không quá 100, các phần tử đều không quá 1000). 
// Viết chương trình tìm các đoạn tăng liên tiếp trong dãy mà số phần tử là nhiều nhất.

// Input: 
// Dòng đầu ghi số bộ test. 
// Mỗi test gồm 2 dòng: 
// Dòng đầu ghi số N là số phần tử của dãy. 
// Dòng sau ghi N số của dãy. N không quá 100, các số trong dãy đều nguyên dương và không quá 1000.
// Output: 
// Với mỗi bộ test, ghi ra thứ tự bộ test. 
// Sau đó là 1 dòng ghi độ dài của đoạn tăng dài nhất. 
// Tiếp theo là một số dòng ghi lần lượt các đoạn tăng dài nhất, từ trái qua phải trong dãy ban đầu.

// Ví dụ:
// Input:
// 2
// 16
// 2 3 5 7 4 5 8 9 7 11 8 9 6 7 10 12
// 12
// 2 3 2 3 2 3 2 2 2 3 4 1
// Output:
// Test 1:
// 4
// 2 3 5 7
// 4 5 8 9
// 6 7 10 12
// Test 2:
// 3
// 2 3 4

#include<stdio.h>
#include<stdbool.h>

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        int longestStreak = 0;
        int currentStreak = 1;
        for(int i = 0; i < n;){
            for(int j = i + 1; j < n; j++){
                if(a[j] > a[j - 1]){
                    currentStreak++;
                }
                longestStreak = (longestStreak > currentStreak) ? longestStreak : currentStreak;
                if(j == n - 1){
                    i = n;
                    break;
                }
                if(a[j] <= a[j - 1]){
                    i = j;
                    currentStreak = 1;
                    break;
                }

            }
        }
        printf("Test %d:\n", t);
        printf("%d\n", longestStreak);
        for(int i = 0; i < n;){
            bool ok = true;
            int tmp = i;
            for(int j = tmp + 1; j < tmp + longestStreak; j++){
                if(a[j] <= a[j - 1]){
                    i = j;
                    ok = false;
                    break;
                }
                if(j == n - 1){
                    i = n;
                    break;
                }
                if(j == tmp + longestStreak - 1){
                    i = tmp + longestStreak;
                    break;
                }

            }
            if(ok){
                for(int j = tmp; j < tmp + longestStreak; j++){
                    printf("%d ", a[j]);
                }
                printf("\n");
            }
        }
    }
}