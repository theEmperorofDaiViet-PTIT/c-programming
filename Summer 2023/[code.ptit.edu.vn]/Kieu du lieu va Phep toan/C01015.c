// PHƯƠNG TRÌNH BẬC HAI

// Viết chương trình nhập 3 số thực a, b, c và in ra nghiệm của phương trình bậc hai a*x2 + b*x + c = 0.

// Input
// Chỉ có một dòng ghi ba số a, b, c, giá trị tuyệt đối không quá 1000. Không có trường hợp a = b = c = 0.
// Output
// Kết quả ghi ra trên một dòng, nếu không có nghiệm in ra NO.

// Ví dụ:
// Input:
// 1 2 1
// Output:
// -1.00

#include<stdio.h>
#include<math.h>

void main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if(a == 0){
        if(b != 0){
            printf("%.2f", (-c) / b);
        }
        else{
            printf("NO");
        }
    }
    else{
        float delta = b * b - 4 * a * c;
        if(delta < 0){
            printf("NO");
        }
        else if(delta == 0){
            printf("%.2f",  -b / (2 * a));
        }
        else{
            printf("%.2f %.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
        }
    }
}