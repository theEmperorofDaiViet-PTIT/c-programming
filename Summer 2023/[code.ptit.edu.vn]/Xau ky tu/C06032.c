// GHÉP XÂU

// Cho M xâu kí tự. Nhiệm vụ của bạn là hãy ghép các xâu này thành một từ, sao cho từ thu được có thứ tự từ điển nhỏ nhất.

// Input:
// Dòng đầu tiên là số lượng bộ test T (T ≤ 100).
// Mỗi test gồm số nguyên M (M ≤ 9) là số lượng các từ, theo sau là M xâu.
// Mỗi xâu có độ dài không vượt quá 10.
// Output:
// Với mỗi test hãy in ra xâu có thứ tự từ điển nhỏ nhất tìm được.

// Ví dụ:
// Input:
// 5
// 4 acm ptit for students
// 5 k duz q rc lvraw
// 3 a bb cc
// 5 asf asfi asfi afsi okj
// 5 ukuy hopji lie jaa dcyi
// Output:
// acmforptitstudents
// duzklvrawqrc
// abbcc
// afsiasfasfiasfiokj
// dcyihopjijaalieukuy

#include<stdio.h>
#include<string.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m;
        scanf("%d", &m);
        char a[m][100];
        for(int i = 0; i < m; i++){
            scanf("%s", a[i]);
        }
        for(int i = 0; i < m; i++){
            for(int j = i + 1; j < m; j++){
                char s1[200], s2[200];
                strcpy(s1, a[i]);
                strcpy(s2, a[j]);
                strcat(s1, a[j]);
                strcat(s2, a[i]);
                char tmp[100] = "";
                if(strcmp(s1, s2) > 0){
                    strcpy(tmp, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], tmp);
                }
            }
        }
        for(int i = 0; i < m; i++){
            printf("%s", a[i]);
        }
        printf("\n");
    }
}