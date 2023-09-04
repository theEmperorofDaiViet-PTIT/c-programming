// CHỮ SỐ CHẴN LẺ 1

// Cho số nguyên dương N không quá 9 chữ số.
// Hãy đếm xem N có bao nhiêu chữ số lẻ và bao nhiêu chữ số chẵn. 
// Nếu không tồn tại số lẻ hoặc số chẵn thì in ra kết quả là 0 cho loại số tương ứng

// Input
// Chỉ có một dòng ghi số N
// Output
// Ghi số chữ số lẻ rồi đến số chữ số chẵn

// Ví dụ:
// Input:
// 12345678
// Output:
// 4 4

#include<stdio.h>

void main(){
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
    printf("%d %d", odd, even);
}