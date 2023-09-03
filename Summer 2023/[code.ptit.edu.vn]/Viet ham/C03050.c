// ĐIỂM TRUNG TÂM

// Trên tờ giấy A4, Nam đã đánh dấu sẵn N điểm từ 1 đến N và liệt kê danh sách N-1 đoạn thẳng nối các điểm với nhau. 
// Nam nhờ Bình kiểm tra giúp xem với danh sách N-1 đoạn thẳng đó thì có điểm nào là điểm trung tâm hay không.
// Một điểm được coi là trung tâm nếu nó có đoạn thẳng nối với tất cả N-1 điểm còn lại.

// Input
// Dòng đầu tiên ghi số N (1 ≤ N ≤ 10^5).
// N-1 dòng tiếp theo, mỗi dòng ghi ra một đoạn thẳng.
// Kết quả
// Ghi ra trên một dòng chữ “Yes” nếu tồn tại điểm trung tâm; chữ “No” trong trường hợp ngược lại.

// Ví dụ:
// Input:
// 5
// 1 2
// 1 3
// 1 4
// 1 5
// Output:
// Yes

#include<stdio.h>
#include<stdbool.h>

bool check(int arr[], int n);

void main(){
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for(int i = 1; i <= n; i++){
        arr[i] = 0;
    } 
    for(int i = 1; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a]++;
        arr[b]++;
    }
    
    (check(arr, n)) ? printf("Yes") : printf("No");
}

bool check(int arr[], int n){
    for(int i = 1; i <= n; i++){
        if(arr[i] >= n - 1){
            return true;
        }
    }
    return false;
}