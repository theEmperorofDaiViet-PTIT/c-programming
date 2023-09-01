// PHƯƠNG TRÌNH BẬC NHẤT

// Phương trình bậc nhất là phương trình dạng ax + b = 0.
// Viết chương trình C cho phép nhập vào a,b và thực hiện giải phương trình bậc nhất.
// Nếu vô nghiệm thì in ra VN
// Nếu có nghiệm thì in ra VSN
// Nếu phương trình có nghiệm duy nhất thì in ra với định dạng luôn lấy 2 chữ số thập phân sau dấy chấm

// INPUT
// 2 -1
// OUTPUT
// 0.50

#include<stdio.h>

void main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0){
        printf("%s", "VSN");
    }
    else if(a == 0  && b != 0){
        printf("%s", "VN");
    }
    else{
        printf("%.2f", (double) -b / a);
    }
}