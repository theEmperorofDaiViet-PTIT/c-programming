// VẼ HÌNH CHỮ NHẬT THEO NGUYÊN TẮC D (1)

// Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật.
// Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.

// INPUT
// 4 4
// OUTPUT
// 1234
// 2123
// 3212
// 4321

// Hoặc
// INPUT
// 4 6
// OUTPUT
// 123456
// 212345
// 321234
// 432123

// Hoặc
// INPUT
// 6 4
// OUTPUT
// 1234
// 2123
// 3212
// 4321
// 5432
// 6543

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 0; i < a; i++){
        if(i < b){
            for(int j = i; j >= 0; j--){
                printf("%d", j + 1);
            }
            for(int j = 2; j < b - i + 1; j++){
                printf("%d", j);
            }

        }
        else{
            for(int j = i + 1; j >= i - b + 2; j--){
                printf("%d", j);
            }
        }
        printf("\n");
    }
}