// TÌM TỔNG/HIỆU/THƯƠNG/TÍCH CỦA HAI SỐ NGUYÊN

// Viết chương trình C nhập vào hai số nguyên a và b. Thực hiện các phép cộng, trừ, nhân, chia và chia lấy dư và in ra kết quả.
// (Lưu ý:
// + trong trường hợp b = 0 thì không thực hiện bất kỳ tính toán nào và in ra màn hình số 0
// + kết quả của phép chia chỉ lấy 2 chữ số sau dấu chấm)

// INPUT
// 10 5
// OUTPUT
// 15 5 50 2.00 0

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b == 0){
        printf("%d", 0);
    }
    else{
        printf("%d %d %d %.2f %d", a + b, a - b, a * b, (float) a / b, a % b);
    }
}