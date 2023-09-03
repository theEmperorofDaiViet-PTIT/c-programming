// TAM GIÁC KÝ TỰ - 1

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
// a
// c b
// d e f
// j i h g

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);

    char arr[n][n];
    int index = 97;
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
                printf("%c ", arr[i][j]);
            }
        }
        printf("\n");
    }
}