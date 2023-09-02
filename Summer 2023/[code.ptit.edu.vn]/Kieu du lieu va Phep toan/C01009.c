// CHUYỂN ĐỔI THANG ĐO NHIỆT ĐỘ

// Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau:
// F = (C * 9 / 5) + 32
// Viết chương trình nhập vào nhiệt độ đo theo độ C, thực hiện chuyển sang đơn vị đo độ F và in ra màn hình. (Lưu ý luôn lấy 2 chữ số thập phân). 

// Input
// Có duy nhất một dòng ghi nhiệt độ đo theo độ C (không quá 100).
// Output
// In kết quả trên một dòng.

// Ví dụ:
// Input:
// 24
// Output:
// 75.20

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    printf("%.2f", ((double)n * 9 / 5) + 32);
}