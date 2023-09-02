// SẮP XẾP THÍ SINH

// Hãy sắp xếp danh sách thí sinh theo tổng điểm giảm dần.

// Mỗi thí sinh gồm các thông tin:
//     - Mã thí sinh: là một số nguyên, tự động tăng. Tính từ 1.
//     - Tên thí sinh, ngày sinh
//     - Điểm môn 1, điểm môn 2, điểm môn 3

// Input:
// Dòng đầu chứa số thí sinh. Mỗi thí sinh viết trên 3 dòng:
//     - Dòng 1: Tên thí sinh
//     - Dòng 2: Ngày sinh
//     - Dòng 3,4,5: 3 điểm thi tương ứng. Các điểm thi đều đảm bảo hợp lệ (từ 0 đến 10).
// Output:
// In ra danh sách thí sinh đã sắp xếp theo tổng điểm giảm dần. 
// Nếu 2 thí sinh bằng điểm nhau thì thí sinh nào xuất hiện trước sẽ viết trước. 
// Mỗi thí sinh viết trên một dòng gồm: mã, tên, ngày sinh và tổng điểm. 
// Các thông tin cách nhau đúng 1 khoảng trống. Điểm tổng được làm tròn đến 1 số sau dấu phẩy.

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
// 4.5
// 4.5
// 5.0
// Output:
// 2 Nguyen Van B 1/9/1994 26.5
// 1 Nguyen Van A 12/12/1994 16.0
// 3 Nguyen Van C 6/7/1994 14.0

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

void sort(struct candidate candidates[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        struct candidate tmp = candidates[i];
        while(j >= 0 && candidates[j].total < tmp.total){
            candidates[j + 1].id = candidates[j].id;
            strcpy(candidates[j + 1].name, candidates[j].name);
            strcpy(candidates[j + 1].dob, candidates[j].dob);
            candidates[j + 1].score1 = candidates[j].score1;            
            candidates[j + 1].score2 = candidates[j].score2;            
            candidates[j + 1].score3 = candidates[j].score3;            
            candidates[j + 1].total = candidates[j].total;      

            j--;      
        }
        candidates[j + 1].id = tmp.id;
        strcpy(candidates[j + 1].name, tmp.name);
        strcpy(candidates[j + 1].dob, tmp.dob);
        candidates[j + 1].score1 = tmp.score1;            
        candidates[j + 1].score2 = tmp.score2;            
        candidates[j + 1].score3 = tmp.score3;            
        candidates[j + 1].total = tmp.total;  
    }
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

    sort(candidates, n);

    for(int i = 0; i < n; i++){
        printCandicate(candidates[i]);   
    }
}