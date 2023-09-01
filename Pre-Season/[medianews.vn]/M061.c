// VẼ HÌNH CHỮ NHẬT THEO NGUYÊN TẮC B (1)

// Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật.
// Thực hiện in hình chữ nhật số theo nguyên tắc tương ứng.

// INPUT
// 4 4
// OUTPUT
// 1234
// 2344
// 3444
// 4444

// Hoặc
// INPUT
// 3 5
// OUTPUT
// 12345
// 23455
// 34555

// Hoặc
// INPUT
// 6 4
// OUTPUT
// 1234
// 2344
// 3444
// 4444
// 4444
// 4444

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = b;

    for(int i = 0; i < a; i++){
        for(int j = i, l = i; j < b; j++, l++){
            printf("%d", l + 1);
        }
        for(int j = 0; j < i; j++){
            if(j < b){
                printf("%d", n);
            }
        }
        printf("\n");
    }
}