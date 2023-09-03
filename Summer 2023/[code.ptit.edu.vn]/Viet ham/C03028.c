// TAM GIÁC PASCAL

// Tam giác Pascal là tam giác có công thức tính giá trị một vị trí bất kỳ như sau
// (n,k) = n!/k!(n-k)!
// Trong đó: n là hàng và k là cột.
// Người ta thường tận dụng hàm đệ quy để điền các giá trị cho tam giác Pascal.
// Viết chương trình sử dụng đệ quy nhập vào số nguyên dương n không quá 10 và in ra tam giác Pascal tương ứng 
// (lưu ý mỗi phần tử cách nhau 1 khoảng trắng)

// Ví dụ:
// Input:
// 5
// Output:
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1

#include<stdio.h>

int paskal(int n, int m);

void main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", paskal(i, j));
        }
        printf("\n");
    }

}

int paskal(int n, int m){
    if(n == m || m == 1){
        return 1;
    }
    else{
        return paskal(n - 1, m) + paskal(n - 1, m - 1);
    }
    
}