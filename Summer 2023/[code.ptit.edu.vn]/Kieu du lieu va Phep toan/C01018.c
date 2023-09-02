// SỐ CHÍNH PHƯƠNG

// Nhập một số nguyên dương không quá 9 chữ số. Hãy kiểm tra xem đó có phải số chính phương hay không.

// Input
// Dòng đầu của dữ liệu vào ghi số bộ test, mỗi bộ test ghi một số nguyên dương N.
// Output
// Ghi ra YES nếu đúng và NO nếu không.

// Ví dụ:
// Input:
// 3
// 11
// 121
// 361
// Output:
// NO
// YES
// YES

#include<stdio.h>
#include<math.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        float n;
        scanf("%f", &n);
        float m = sqrt(n);
        if(m != (int) (n / m)){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
}