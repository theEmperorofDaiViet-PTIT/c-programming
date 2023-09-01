// CHUYỂN ĐƠN VỊ ĐO NHIỆT ĐỘ C VÀ F

// Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau:
// F = (C * 9 / 5) + 32

// Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình.
// (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)

// INPUT
// 24
// OUTPUT
// 75.20

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    printf("%.2f", ((double)n * 9 / 5) + 32);
}