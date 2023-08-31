// VẼ HÌNH CHỮ NHẬT THEO NGUYÊN TẮC C (2)

// Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật.
// Vẽ hình chữ nhật số theo nguyên tắc tương ứng.

// INPUT
// 4 4
// OUTPUT
// 1234
// 2343
// 3432
// 4321

// Hoặc
// INPUT
// 3 5
// OUTPUT
// 12345
// 23454
// 34543

// Hoặc
// INPUT
// 5 3
// OUTPUT
// 123
// 232
// 321
// 432
// 543

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 0; i < a; i++){
        if(i < b){
            for(int j = i; j < b; j++){
                printf("%d", j + 1);
            }
            for(int j = b - 1; j >= b - i; j--){
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