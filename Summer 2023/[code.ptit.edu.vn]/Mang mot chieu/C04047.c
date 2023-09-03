// XẾP HÀNG

// Tại sân bay, mọi người đang làm thủ tục để check in. Có tất cả N vị khách. 
// Vị khách thứ i tới làm thủ tục tại thời điểm T[i] và cần D[i] thời gian để check-in xong.
// Các bạn hãy xác định xem thời điểm nào tất cả các vị khách làm xong thủ tục để lên máy bay?

// Input
// Dòng đầu tiên là số nguyên dương N (N ≤ 100).
// N dòng tiếp theo, mỗi dòng gồm 2 số nguyên cho biết thời điểm đến của vị khách thứ i và thời gian vị khách này làm xong thủ tục check in. 
// Các giá trị này không vượt quá 10^6.
// Output
// In ra đáp án tìm được.

// Ví dụ:
// Input:
// 3
// 2 1
// 8 3
// 5 7
// Output:
// 15
// Giải thích test:
// Vị khách đầu tiên tới lúc t = 2 và mất 1 đơn vị thời gian để check in. 
// Vị khách thứ 2 tới lúc t = 5, và làm xong thủ tục tại thời điểm t = 12. 
// Vị khách thứ 3 tới lúc t = 8, nhưng phải chờ tới thời điểm t = 12 để check in, hoàn thành tại thời điểm t = 15.

#include<stdio.h>

void sort(int a[], int b[], int n);

void main(){
    int n;
    scanf("%d", &n);
    int res = 0;
    int startAt[n];
    int period[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &startAt[i], &period[i]);
    }
    sort(startAt, period, n);
    res = 0;
    for(int i = 0; i < n; i++){
        if(startAt[i] < res){
            startAt[i] = res;
        }
        res += (startAt[i] - res) + period[i];        
    }
    printf("%d", res);
}

void sort(int a[], int b[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int tmp1 = a[i];
        int tmp2 = b[i];
        while(j >= 0 && a[j] > tmp1){
            a[j + 1] = a[j];
            b[j + 1] = b[j];
            j--;
        }
        a[j + 1] = tmp1;
        b[j + 1] = tmp2;
    }
}