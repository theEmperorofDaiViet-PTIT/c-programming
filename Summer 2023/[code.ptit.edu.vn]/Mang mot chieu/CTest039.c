// SẮP XẾP CHỮ SỐ

// Cho số nguyên dương N có không quá 18 chữ số. 
// Hãy sắp xếp các chữ số của N theo thứ tự tăng dần từ trái sang phải để tạo một số mới và in kết quả ra màn hình.

// Input
// Dòng đầu ghi số bộ test (không quá 10)
// Mỗi bộ test viết trên một dòng số nguyên dương N có không quá 18 chữ số
// Output
// Với mỗi bộ test, viết ra số tạo được sau khi đã sắp xếp các chữ số.
// Chú ý: Bỏ qua các chữ số 0 ở đầu (nếu có).

// Ví dụ:
// Input:
// 2
// 347120
// 44774477
// Output:
// 12347
// 44447777

#include<stdio.h>
#include<stdbool.h>

void sort(char a[], int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char a[18];
        scanf("%s", &a);
        sort(a, 18);
        bool firstDigitChecked = false;
        for(int i = 0; i < 18; i++){
            if(a[i] >= '0' && a[i] <= '9'){
                if(a[i] != '0'){
                    firstDigitChecked = true;
                }
                if(firstDigitChecked){
                    printf("%c", a[i]);
                }
            }
        }
        printf("\n");
        for(int i = 0; i < 18; i++){
            a[i] = 'x';
        }
    }
}

void sort(char a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > tmp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
    }
}