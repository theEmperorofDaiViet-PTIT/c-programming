// TAM GIÁC KÝ TỰ - 3

// Nhập vào chiều cao tam giác (không quá 20).
// Vẽ hình tam giác ký tự theo nguyên tắc tương ứng theo mẫu trong ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi chiều cao (không quá 20).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 4
// Output:
// A
// B E
// C F H
// D G I J

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    char arr[n][n];
    int index = 65;
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
                printf("%c ", arr[i][j]);
            }
        }
        printf("\n");
    }
}