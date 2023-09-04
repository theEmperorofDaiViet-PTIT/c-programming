// ĐẾM SỐ TỪ TRONG XÂU

// Một từ trong xâu ký tự được định nghĩa là một dãy ký tự liên tiếp không có khoảng trống. 
// Hãy đếm số từ của xâu và in kết quả ra màn hình.

// Dữ liệu vào: 
// Dòng đầu ghi số bộ test. Mỗi bộ test có một xâu không quá 200 ký tự.
// Kết quả: 
// Ghi ra số từ đếm được.

// Ví dụ:
// Input:
// 2
// Lap trinh     C va C++
// ACBDSDS kdfjdkgfdgkhfgjlfgdkjfdgdgfdgfd
// Output:
// 5
// 2

#include<stdio.h>
#include<string.h>

void main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s[200];
        fgets(s, sizeof(s) + 1, stdin);
        int count = 0;
        for(int i = 1; i < strlen(s); i++){
            if(s[i] == ' ' && s[i - 1] != ' '){
                count++;
            }
            if(i == strlen(s) - 1 && s[i - 1] != ' '){
                count++;
            }
        }        
        printf("%d\n", count);
    }
}