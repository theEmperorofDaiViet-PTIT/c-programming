// KIỂM TRA TAM GIÁC (VUÔNG, CÂN, ĐỀU)

// Viết chương trình C cho phép nhập vào ba cạnh của một tam giác và kiểm tra
// xem ba cạnh có thỏa mãn là ba cạnh của tam giác đặc biệt nào đó, như là tam
// giác vuông, cân, đều hay không.
// Nếu là tam giác đều in ra 3
// Nếu là tam giác cân in ra 2
// Nếu là tam giác vuông in ra 1

// INPUT
// 3 3 3
// OUTPUT
// 3

#include<stdio.h>

void main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if(a == b && b == c){
        printf("3");
    }
    else if(a == b || b == c || c == a){
        printf("2");
    }
    else if(a * a + b * b == c * c || b * b + c * c == a * a || c * c + b * b == a * a){
        printf("1");
    }
}