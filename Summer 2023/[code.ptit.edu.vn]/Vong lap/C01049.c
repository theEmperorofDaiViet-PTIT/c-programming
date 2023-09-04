// CHỮ SỐ CHẴN LẺ 2

// Nhập một số nguyên dương N không quá 9 chữ số. Hãy đếm xem N có bao nhiêu chữ số lẻ và bao nhiêu chữ số chẵn.

// Input
// Dòng đầu của dữ liệu vào ghi số bộ test, mỗi bộ test ghi trên một dòng một số nguyên cần kiểm tra.
// Output
// Kết quả in ra trên một dòng lần lượt là số chữ số lẻ và số chữ số chẵn, cách nhau một khoảng trống.

// Ví dụ:
// Input:
// 2
// 1234
// 4444444
// Output:
// 2 2
// 0 7

#include<stdio.h>

void main(){
    int t;
    scanf("%d0", &t);
    while(t--){
        char a[9];
        scanf("%s", &a);
        int odd = 0;
        int even = 0;
        for(int i = 0; i < 9; i++){
            if(a[i] >= 48 && a[i] <= 57){
                if(a[i] % 2 == 1)
                    odd++;
                else
                    even++;
            }
        }
        printf("%d %d\n", odd, even);
    }
}