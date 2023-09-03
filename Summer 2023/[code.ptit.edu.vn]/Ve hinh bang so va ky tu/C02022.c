// TAM GIÁC SỐ - 8

// Nhập vào chiều cao tam giác (không quá 9).
// Vẽ hình tam giác số theo nguyên tắc tương ứng theo mẫu trong ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi chiều cao (không quá 9).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 4
// Output:
// 1
// 3 2
// 4 5 6
// 10 9 8 7

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    int arr[n][n];
    int index = 1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            for(int j = 0; j <= i; j++){
                arr[i][j] = index;
                index++;
            }
        }
        else{
            for(int j = i; j >= 0; j--){
                arr[i][j] = index;
                index++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j <= i){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}