// SỐ KHÔNG GIẢM

// Một số gọi là số không giảm nếu các chữ số từ trái qua phải tạo thành dãy không giảm (tức là không có chữ số nào phía sau nhỏ hơn chữ số ngay trước nó). 
// Viết chương trình liệt kê các số không giảm có N chữ số (1 < N < 7).  

// Input
// Dòng đầu ghi số bộ test
// Mỗi bộ test ghi số N
// Output
// Với mỗi bộ test, ghi ra lần lượt các số không giảm có N chữ số, các số cách nhau một khoảng trống.
// Hết một bộ test thì xuống dòng.

// Ví dụ:
// Input:
// 1
// 2
// Output:
// 11 12 13 14 15 16 17 18 19 22 23 24 25 26 27 28 29 33 34 35 36 37 38 39 44 45 46 47 48 49 55 56 57 58 59 66 67 68 69 77 78 79 88 89 99

#include<stdio.h>

// Combination Repetition

void generate(int chosen[], int arr[], int index, int n, int start, int end);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int chosen[n + 1];
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        generate(chosen, arr, 0, n, 0, 8);
        printf("\n");
    }


}

void generate(int chosen[], int arr[], int index, int n, int start, int end){
    if(index == n){
        for(int i = 0; i < n; i++){
            printf("%d", arr[chosen[i]]);
        }
        printf(" ");
        return;
    }

    for(int i = start; i <= end; i++){
        chosen[index] = i;
        generate(chosen, arr, index + 1, n, i, end);
    }
    return;
}