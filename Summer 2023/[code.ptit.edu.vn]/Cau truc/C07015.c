// TÌM THỦ KHOA CỦA KỲ THI

// Cho danh sách thí sinh gồm các thông tin: 
// Mã thí sinh: là một số nguyên, tự động tăng, tính từ 1; 
// Tên thí sinh, ngày sinh, điểm môn 1, điểm môn 2, điểm môn 3. 
// Hãy tìm thủ khoa trong danh sách đó. Nếu có nhiều thí sinh có điểm bằng nhau và đều cao nhất thì in ra tất cả thí sinh đó theo mã tăng dần.

// Input:
// Dòng đầu chứa số thí sinh. Mỗi thí sinh viết trên 3 dòng: 
// Dòng 1: Tên thí sinh, Dòng 2: Ngày sinh, Dòng 3,4,5: 3 điểm thi tương ứng. Các điểm thi đều đảm bảo hợp lệ (từ 0 đến 10).
// Output:
// In ra các thủ khoa của kỳ thi, mỗi thí sinh 1 dòng, gồm mã, tên, ngày sinh và tổng điểm. 
// Chú ý: nếu có nhiều thí sinh bằng điểm nhau và cao nhất thì in ra tất cả thí sinh đó theo thứ tự mã thí sinh tăng dần.

// Ví dụ:
// Input:
// 3
// Nguyen Van A
// 12/12/1994
// 3.5
// 7.0
// 5.5
// Nguyen Van B
// 1/9/1994
// 7.5
// 9.5
// 9.5
// Nguyen Van C
// 6/7/1994
// 8.5
// 9.5
// 8.5
// Output:
// 2 Nguyen Van B 1/9/1994 26.5
// 3 Nguyen Van C 6/7/1994 26.5

#include<stdio.h>
#include<string.h>

struct candidate {
    int id;
    char name[100];
    char dob[100];
    float score1;
    float score2;
    float score3;
    float total;
};

void printCandicate(struct candidate candidate){
    printf("%d %s %s %.1f\n", candidate.id, candidate.name, candidate.dob, candidate.total);
}

void main(){
    int n;
    scanf("%d", &n);
    struct candidate candidates[n];
    for(int i = 0; i < n; i++){
        candidates[i].id = i + 1;
        getchar();
        fgets(candidates[i].name, sizeof(candidates[i].name) + 1, stdin);
        candidates[i].name[strcspn(candidates[i].name, "\n")] = 0;
        fgets(candidates[i].dob, sizeof(candidates[i].dob) + 1, stdin);
        candidates[i].dob[strcspn(candidates[i].dob, "\n")] = 0;
        scanf("%f", &candidates[i].score1);
        scanf("%f", &candidates[i].score2);
        scanf("%f", &candidates[i].score3);
        candidates[i].total = candidates[i].score1 + candidates[i].score2 + candidates[i].score3;
    }
    float max = 0;
    for(int i = 0; i < n; i++){
        max = candidates[i].total > max ? candidates[i].total : max;        
    }
    for(int i = 0; i < n; i++){
        if(candidates[i].total == max){
            printCandicate(candidates[i]);
        }       
    }
}