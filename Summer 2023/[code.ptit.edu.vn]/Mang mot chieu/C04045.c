// DÃY ƯU THẾ

// Cho dãy A[] chỉ bao gồm các số nguyên dương không quá 105 nhưng không biết trước số phần tử của dãy. 
// Người ta gọi dãy A[] là dãy ưu thế nếu thỏa mãn 1 trong 2 điều kiện sau đây:
// Dãy gọi là ưu thế chẵn nếu số phần tử của dãy là chẵn và số lượng số chẵn trong dãy nhiều hơn số lượng số lẻ.
// Dãy gọi là ưu thế lẻ nếu số phần tử của dãy là lẻ và số lượng số lẻ trong dãy nhiều hơn số lượng số chẵn.
// Hãy kiểm tra xem dãy A[] có phải là dãy ưu thế hay không.

// Dữ liệu vào
// Dòng đầu ghi số bộ test, không quá 10
// Mỗi bộ test là một dãy các số nguyên dương (không quá 104) và có không quá 200 số, các số cách nhau 1 khoảng trống, không biết trước số lượng phần tử.
// Kết quả
// Nếu dãy A[] thỏa mãn là dãy ưu thế thì in ra YES, nếu không in ra NO

// Ví dụ:
// Input:
// 2
// 11 22 33 44 55 66 77
// 23 34 45 56 67 78 89 90 121 131 141 151 161 171
// Output:
// YES
// NO

#include<stdio.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int total = 0;
        int odd = 0;
        int even = 0;
        int input;
        char space;
        do {
            scanf("%d", &input);
            total++;
            (input % 2 == 0) ? even++ : odd++;
            scanf("%c", &space);
        }
        while(space != '\n');
        if(total % 2 == 0){
            if(even > odd){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
        else{
            if(odd > even){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
        printf("\n"); 
    }
}