// BẮT ĐẦU VÀ KẾT THÚC

// Viết chương trình kiểm tra một số nguyên dương bất kỳ (2 chữ số trở lên, không quá 9 chữ số) có chữ số bắt đầu và kết thúc bằng nhau hay không.

// Input
// Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng số nguyên dương tương ứng cần kiểm tra.
// Output
// Mỗi bộ test viết ra YES hoặc NO, tương ứng với bộ dữ liệu vào

// Ví dụ:
// Input:
// 2
// 12451
// 1000012
// Output:
// YES
// NO

#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[9];
        scanf("%s", &a);
        for(int i = 8; i >= 0; i--){
            if(a[i] >= 48 && a[i] <= 57){
                if(a[0] == a[i]){
                    printf("YES\n");
                }
                else{
                    printf("NO\n");
                }
                break;
            }
        }
    }




}