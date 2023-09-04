// XÂU ĐỐI XỨNG - 1

// Cho trước một xâu S. Bạn hãy thay đổi đúng 1 kí tự, sao cho xâu mới thu được là một xâu đối xứng.

// Input: 
// Dòng đầu tiên là số lượng bộ test T (T ≤  20). Mỗi test ghi trên một dòng 1 xâu S có độ dài không quá 20 kí tự.
// Output: 
// Với mỗi test, in ra “YES” nếu có thể biến đổi xâu S thành xâu đối xứng, in ra “NO” trong trường hợp ngược lại.

// Ví dụ:
// Input:
// 3
// abccaa
// abbcca
// abcda
// Output:
// YES
// NO
// YES

#include<stdio.h>
#include<string.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[200];
        scanf("%s", &s);
        int countDiff = 0;
        for(int i = 0; i < strlen(s) / 2; i++){
            if(s[i] != s[strlen(s) - i - 1])
                countDiff++;
        }
        if(strlen(s) % 2 == 0){
            (countDiff == 1) ? printf("YES\n") : printf("NO\n");
        }
        else{
            (countDiff <= 1) ? printf("YES\n") : printf("NO\n");
        }
    }
}