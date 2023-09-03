// TẬP HỢP SỐ NGUYÊN

// Cho dãy số a[] có n phần tử và dãy số b[] có m phần tử là các số nguyên dương nhỏ hơn 1000. 
// Gọi tập hợp A là tập các số khác nhau trong a[], tập hợp B là tập các số khác nhau trong b[].
// Hãy tìm tập giao của A và B, hiệu A – B và hiệu B – A. Mỗi tập kết quả viết trên một dòng theo thứ tự từ nhỏ đến lớn.

// Input
// Dòng đầu ghi 2 số n và m (1 < n, m < 100).
// Dòng thứ 2 ghi n số của a[].
// Dòng thứ 3 ghi m số của b[].
// Các số đều dương và nhỏ hơn 1000.
// Output
// Dòng đầu ghi tập giao của A và B
// Dòng thứ 2 ghi tập A – B
// Dòng thứ 3 ghi tập B - A

// Ví dụ:
// Input:
// 5 6
// 1 2 3 4 5
// 3 4 5 6 7 8
// Output:
// 3 4 5
// 1 2
// 6 7 8

#include<stdio.h>

void main(){
    int n, m;
    char check[1000];
    for(int i = 0; i < 1000; i++){
        check[i] = 'o';
    }
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        check[a[i]] = 'A';
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
        switch (check[b[i]]){
        case 'A':
            check[b[i]] = 'x';
            break;
        case 'x':
            break;
        default:
            check[b[i]] = 'B';
            break;
        }
    }
    for(int i = 0; i < 1000; i++){
        if(check[i] == 'x'){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(int i = 0; i < 1000; i++){
        if(check[i] == 'A'){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(int i = 0; i < 1000; i++){
        if(check[i] == 'B'){
            printf("%d ", i);
        }
    }
}