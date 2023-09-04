// ĐẾM CHỮ SỐ NGUYÊN TỐ

// Viết chương trình nhập vào một số n, không quá 10 chữ số.
// Hãy thực hiện đếm số lần xuất hiện của các chữ số nguyên tố trong n và in ra màn hình. 
// (Liệt kê theo thứ tự xuất hiện các chữ số)

// Input
// Chỉ có một số nguyên dương N không quá 10 chữ số.
// Output
// Ghi ra kết quả, mỗi dòng ghi một số nguyên tố và số lần xuất hiện theo thứ tự xuất hiện.

// Ví dụ:
// Input:
// 112345
// Output:
// 2 1
// 3 1
// 5 1

#include<stdio.h>
#include<math.h>

void count(char n[]);

void main(){
    char n[10];
    scanf("%s", &n);
    count(n);
}

void count(char n[]){
    int prime[4] = {2, 3, 5, 7};
    int count[4] = {0, 0, 0, 0};
    for(int i = 0; i < 10; i++){
        if(n[i] >= 48 && n[i] <= 57){
            switch (n[i] - 48){
                case 2:
                    count[0]++;
                    break;
                case 3:
                    count[1]++;
                    break;
                case 5:
                    count[2]++;
                    break;
                case 7:
                    count[3]++;
                    break;
                default:
                    break;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        if(count[i] > 0){
            printf("%d %d\n", prime[i], count[i]);
        }
    }
}