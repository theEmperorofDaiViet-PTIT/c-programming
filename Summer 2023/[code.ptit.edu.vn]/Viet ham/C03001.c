// TỔNG CHỮ SỐ CHIA HẾT CHO 10

// Viết chương trình kiểm tra một số có thỏa mãn tính chất tổng chữ số của nó chia hết cho 10 hay không. 

// Input
// Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng một số nguyên dương, ít nhất 2 chữ số nhưng không quá 9 chữ số.
// Output
// Mỗi bộ test viết ra YES hoặc NO tùy thuộc kết quả kiểm tra.

// Ví dụ:
// Input:
// 3
// 3333
// 555555
// 123455
// Output:
// NO
// YES
// YES

#include<stdio.h>
#include<string.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[10];
        scanf("%s", &s);
        int sum = 0;
        for(int i = 0; i < strlen(s); i++){
            sum += (s[i] - 48);
        }
        (sum % 10 == 0) ? printf("YES\n") : printf("NO\n");
    }
}