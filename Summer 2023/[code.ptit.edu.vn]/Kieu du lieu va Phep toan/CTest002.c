// TÌM TỪ DÀI NHẤT

// Cho dữ liệu dạng luồng văn bản với không quá 1 triệu từ, mỗi từ không quá 100 ký tự. Hãy tìm và in ra từ dài nhất.
// Nếu có nhiều từ dài nhất thì in ra từ đầu tiên.

// Input
// Luồng văn bản. Cần đọc đến hết luồng vào.
// Output
// Ghi ra từ dài nhất đầu tiên, dấu gạch ngang, sau đó đến độ dài.

// Ví dụ:
// Input:
// Lap trinh C++
// Cau truc du lieu va giai do
// Output:
// trinh - 5

#include<stdio.h>
#include<string.h>

void main(){
    char a[1000000][100];
    char input[100];
    int index = 0;
    int maxLength = 0;
    int indexOfMaxLength = 0;
    while(scanf("%s", input) != EOF){
        strcpy(a[index], input);
        if(strlen(input) > maxLength){
            maxLength = strlen(input);
            indexOfMaxLength = index;
        }
        index++;
    }
    printf("%s - %d", a[indexOfMaxLength], maxLength);
}