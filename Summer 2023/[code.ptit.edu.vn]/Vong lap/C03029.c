// SỐ CHẴN ĐẶC BIỆT

// Một số gọi là số chẵn đặc biệt nếu nó là số chẵn và tất cả các chữ số đều chẵn. 
// Viết chương trình kiểm tra xem số đã cho có phải là số chẵn đặc biệt hay không.

// Input
// Dòng đầu ghi số bộ test
// Mỗi bộ test ghi số N không quá 18 chữ số
// Output
// Với mỗi bộ test, nếu N là số chẵn đặc biệt thì ghi ra YES, ngược lại ghi ra NO trên một dòng

// Ví dụ:
// Input:
// 2
// 123456
// 22446688000000
// Output:
// NO
// YES

#include<stdio.h>

char* check(char a[]);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[18];
        scanf("%s", &a);
        printf("%s\n", check(a));
    }
}

char* check(char a[]){
    for(int i = 0; i < 18; i++){
        if(a[i] >= 48 && a[i] <= 57){
            if(a[i] % 2 != 0){
                return "NO";
            }
        }
    }
    return "YES";
}