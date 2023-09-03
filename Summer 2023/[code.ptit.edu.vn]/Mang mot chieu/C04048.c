// CHIẾU SÁNG

// Chính quyền thành phố Highland đã lên kế hoạch để sửa tuyến đường ven biển sau khi được sửa chữa tạm thời. 
// Tuyến đường có chiều dài bằng N, và hiện tại có M chiếc đèn cao áp đang hoạt động. 
// Tầm chiếu sáng của mỗi chiếc đèn là K, nghĩa là tại vị trí X nếu được dựng đèn, nó sẽ chiếu sáng cho khu vực từ X – K tới X + K.
// Các bạn hãy thử tính xem cần dựng thêm ít nhất bao nhiêu đèn để tuyến đường có thể được chiếu sáng hoàn toàn?

// Input:
// Dòng đầu tiên là chiều dài của tuyến đường N (1 ≤ N ≤ 1000).
// Tiếp theo là số lượng chiếc đèn đang hoạt động, M (M ≤ N).
// Dòng tiếp theo chứa số nguyên K (0 ≤ K ≤ N).
// Dòng cuối chứa M số nguyên, lần lượt là vị trí của những chiếc đèn đang có.
// Output: 
// In ra một số nguyên là đáp án đáp án tìm được.

// Ví dụ:
// Test 1:
// Input:
// 6
// 2
// 2
// 1 5
// Output:
// 0

// Test 2:
// Input:
// 15
// 3
// 10
// 1 2 3
// Output:
// 1
// Giải thích test 2: Dựng thêm một chiếc đèn tại vị trí 15.

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int k;
    scanf("%d", &k);
    int M[m];
    for(int i = 0; i < m; i++){
        scanf("%d", &M[i]);
        M[i]--;
    }
    char road[n];
    for(int i = 0; i < n; i++){
        road[i] = 'D';
    }
    for(int i = 0; i < m; i++){
        for(int j = M[i]; j >= 0 && j >= M[i] - k; j--){
            road[j] = 'L';
        }
        for(int j = M[i]; j < n && j <= M[i] + k; j++){
            road[j] = 'L';
        }
    }
    int add = 0;
    int light = 2 * k + 1;
    for(int i = 0; i < n; i++){
        int blank = 0;
        if(road[i] == 'D'){
            for(int j = i; j < n; j++){
                if(road[j] == 'D'){
                    blank++;
                }
                else{
                    i = j;
                    break;
                }
                if(j == n - 1){
                    i = j;
                    break;
                }
            }
        }
        add += blank / light;
        add = (blank % light > 0) ? add + 1 : add;
    }
    printf("%d", add);
}