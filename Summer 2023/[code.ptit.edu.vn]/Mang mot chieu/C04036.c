// ĐỔI TIỀN

// Tại ngân hàng có các mệnh giá bằng 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000, số lượng tờ tiền mỗi mệnh giá là không hạn chế. 
// Một người cần đổi số tiền có giá trị bằng N. Hãy xác định xem số tờ tiền ít nhất sau khi đổi là bao nhiêu?

// Input: 
// Dòng đầu tiên là số lượng bộ test T (T ≤ 50). Mỗi test gồm 1 số nguyên N ( 1 ≤ N ≤ 100000).
// Output: 
// Với mỗi test, in ra đáp án trên một dòng.

// Ví dụ:
// Input:
// 2
// 70
// 121
// Output:
// 2
// 3
// Giải thích test 2: 121 = 100 + 20 + 1

#include<stdio.h>

void main(){
    int bank[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int count = 0;
        while(n > 0){
            int selected;
            for(int i = 0; i < 10; i++){
                if(bank[i] > n){
                    break;
                }
                selected = bank[i];
            }
            count++;
            n -= selected;
        }
        printf("%d\n", count);
    }
}