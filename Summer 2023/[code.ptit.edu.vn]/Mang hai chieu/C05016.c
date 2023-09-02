// MA TRẬN XOẮN ỐC 1

// Ma trận xoắn ốc cấp N là một ma trận vuông cấp N*N trong đó ghi các số nguyên dương tăng dần từ 1 đến N*N được điền theo thứ tự xoắn ốc từ ngoài vào trong.
// Hãy viết chương trình in ra ma trận xoắn ốc cấp N.

// Input:
// Chỉ có một dòng ghi số N (1 ≤ N ≤ 100)
// Ouput:
// Ghi ra ma trận kết quả có N dòng, mỗi giá trị số cách nhau một khoảng trống.

// Ví dụ:
// Input:
// 5
// Output:
// 1 2 3 4 5
// 16 17 18 19 6
// 15 24 25 20 7
// 14 23 22 21 8
// 13 12 11 10 9

#include<stdio.h>

void main(){
    int n;
    scanf("%d", &n);
    int a[n][n];
    int i = 0, j = 0, k = 1;
    char direction = 'R';
    int max = n, min = 0;
    while(k <= n * n){
        a[i][j] = k;
        k++;
        if(i < max - 1 && j == max - 1){
            direction = 'D';
        }
        else if(i == max - 1 && j == max - 1){
            direction = 'L';
        }
        else if(i == max - 1 && j == min){
            direction = 'U';
        }
        else if(i == min + 1 && j == min){
            direction = 'R';
            min++;
            max--;
        }
        switch (direction){
            case 'R':
                j++;
                break;
            
            case 'D':
                i++;
                break;
            case 'L':
                j--;
                break;
            case 'U':
                i--;
                break;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}