// VẼ HÌNH CHỮ NHẬT THEO NGUYÊN TẮC A (2)

// Viết chương trình C cho phép nhập vào số hàng và số cột của hình chữ nhật.
// Thực hiện in ra hình chữ nhật theo nguyên tắc tương ứng.

// INPUT
// 5 5
// OUTPUT
// 55555
// 44445
// 33345
// 22345
// 12345

// Hoặc
// INPUT
// 4 6
// OUTPUT
// 666666
// 555556
// 444456
// 333456

// Hoặc
// INPUT
// 6 4
// OUTPUT
// 6666
// 5556
// 4456
// 3456
// 3456
// 3456

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int n = (a > b) ? a : b;
    char arr[n];

    for(int i = 0, k = n - 1; i < a; i++){
        for(int j = i; j < b; j++){
            printf("%d", k + 1);
        }
        for(int j = 0, l = k + 1; j < i; j++, l++){
            if(j < b){
                printf("%d", l + 1);
            }
        }
        printf("\n");
        if(i < b){
            k--;
        }
    }
}