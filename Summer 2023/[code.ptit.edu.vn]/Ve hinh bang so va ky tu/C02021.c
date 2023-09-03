// TAM GIÁC SỐ - 7

// Nhập vào chiều cao tam giác (không quá 9).
// Vẽ hình tam giác số theo nguyên tắc tương ứng theo mẫu trong ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi chiều cao (không quá 9).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 5
// Output:
// 1
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    int arr[n][n];
    int index = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            arr[j][i] = 0;
        }
        for(int j = i; j < n; j++){
            arr[j][i] = index;
            index++;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] != 0){
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }
}