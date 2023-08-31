// ĐẾM CHỮ SỐ CHẴN VÀ CHỮ SỐ LẺ

// Nhập một số nguyên dương N không quá 9 chữ số.
// Hãy đếm xem N có bao nhiêu chữ số lẻ và bao nhiêu chữ số chẵn.
// Nếu không tồn tại số lẻ hoặc số chẵn thì in ra kết quả là 0 cho loại số tương ứng

// INPUT
// 12345678
// OUTPUT
// 4 4

#include<stdio.h>
#include<string.h>

void main(){
    char s[10];
    scanf("%s", &s);
    int even = 0, odd = 0;
    for(int i = 0; i < strlen(s); i++){
        if((s[i] - 48) % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d", odd, even);
}