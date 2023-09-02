// PHƯƠNG TRÌNH BẬC NHẤT

// Viết chương trình nhập 2 số thực a, b và in ra nghiệm của phương trình bậc nhất a*x+b=0.

// Input
// Chỉ có một dòng ghi hai số a, b.
// Output
// Kết quả ghi ra trên một dòng tương ứng là “Vo nghiem”  “Vo so nghiem” hoặc nghiệm dưới dạng số thực có đúng 2 chữ số sau dấu phẩy.

// Ví dụ:
// Input:
// 2 -1
// Output:
// 0.50

// Input:
// 0 1
// Output:
// Vo nghiem

// Input:
// 0 0
// Output:
// Vo so nghiem

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0){
        printf("%s", "Vo so nghiem");
    }
    else if(a == 0  && b != 0){
        printf("%s", "Vo nghiem");
    }
    else{
        printf("%.2f", (double) -b / a);
    }
}