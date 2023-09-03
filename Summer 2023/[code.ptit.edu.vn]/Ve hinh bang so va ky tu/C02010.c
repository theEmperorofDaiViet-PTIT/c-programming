// HÌNH CHỮ NHẬT - 1

// Nhập vào số hàng và số cột của hình chữ nhật (không quá 9). 
// Vẽ hình chữ nhật số theo nguyên tắc tương ứng theo mẫu trong các ví dụ dưới đây.

// Input
// Chỉ có một số dòng ghi số hàng và số cột của hình chữ nhật (không quá 9).
// Output
// Ghi ra kết quả theo mẫu.

// Ví dụ:
// Input:
// 4 4
// Output:
// 1234
// 2341
// 3421
// 4321

// Input:
// 3 5
// Output:
// 12345
// 23451
// 34521

// Input:
// 6 4
// Output:
// 1234
// 2341
// 3421
// 4321
// 5321
// 6321

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int arr[b];
    for(int i = 0; i < b; i++){
        arr[i] = i + 1;
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d", arr[j]);
        }
        if(i < b - 1){
            int tmp = arr[0];
            for(int j = 0; j < b - i - 1; j++){
                arr[j] = arr[j + 1];
            }
            arr[b - i - 1] = tmp;
        }
        else{
            arr[0]++;
        }
        printf("\n");
    }
}