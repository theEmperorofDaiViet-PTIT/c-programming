// THAY ĐỔI ĐẦU CUỐI

// Cho một số nguyên dương n không quá 9 chữ số.
// Hãy thực hiện đổi vị trí của chữ số đầu tiên và chữ số cuối cùng.
// Lưu ý trong trường hợp chữ số cuối cùng là 0 thì khi đổi chỗ sẽ được loại bỏ (ví dụ 9800 -> 809)

// Input
// Chỉ có một số nguyên dương N không quá 9 chữ số.
// Output
// Ghi ra kết quả trên một dòng

// Ví dụ:
// Input:
// 1234
// Output:
// 4231

#include<stdio.h>

void main(){
    char a[9];
    scanf("%s", &a);
    int count = 1;
    int first = a[0] - 48;
    int last = a[0] - 48;
    int lastIndex = 0;
    for(int i = 1; i < 9; i++){
        if(a[i] >= 48 && a[i] <= 57){
            count++;
            last = a[i] - 48;
            lastIndex = i;
        }
    }
    if(count == 1)
        printf("%d", first);
    else{
        if(last != 0)
            printf("%d", last);
        for(int i = 1; i < lastIndex; i++){
            if(a[i] >= 48 && a[i] <= 57){
                printf("%d", a[i] - 48);
            }            
        }
        printf("%d", first);
    }
}