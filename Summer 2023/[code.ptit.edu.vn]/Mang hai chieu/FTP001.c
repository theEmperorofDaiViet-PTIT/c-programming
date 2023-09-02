// TẠO MA TRẬN ĐƠN GIẢN

// Viết chương trình tạo một ma trận vuông kích thước nxn (n nhập từ bàn phím, n > 0).
// Cấu trúc của ma trận với hàng đầu là các phần tử từ 0 -> n-1
// Hàng tiếp theo sẽ thêm một phần tử 0 ở đầu, và phần còn lại từ 0 -> n-2
// Tương tự cho đến hàng cuối sẽ chỉ gồm các phần tử 0

// In:
// Giá trị n
// Out:
// Ma trận kết quả gồm n hàng, mỗi phần tử trên một hàng cách nhau dấu cách

// Ví dụ:
// In:
// 4
// Out:
// 0 1 2 3
// 0 0 1 2
// 0 0 0 1
// 0 0 0 0

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            printf("0 ");
        }
        for(int j = i + 1, k = 1; j < n; j++, k++){
            printf("%d ", k);
        }
        printf("\n");
    }
}