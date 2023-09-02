// QUẢN LÝ SINH VIÊN - 1

// Thông tin về sinh viên gồm có:
//     1. mã sinh viên là số nguyên tự động tăng;
//     2. tên sinh viên;
//     3. điểm sinh viên là số thực gồm điểm môn A, môn B, môn C.
 
// Viết chương trình thực hiện 3 chức năng:
//     1. thêm mới
//     2. cập nhật điểm theo mã sinh viên
//     3. hiển thị danh sách sinh viên theo tổng điểm tăng dần

// Input:
//     - Dòng thứ nhất là lựa chọn chức năng thực hiện
//     - Dòng thứ hai
//         + Nếu lựa chọn ở dòng thứ nhất là 1 thì nhập số sinh viên sẽ thêm mới
//         + Nếu lựa chọn ở dòng thứ nhất là 2 thì nhập mã sinh viên sẽ sửa đổi
//     - Dòng tiếp theo là thông tin sinh viên
//     Chức năng 3 cũng là kết thúc của luồng input
// Output:
//     - Nếu lựa chọn là 1 thì in ra số sinh viên được thêm
//     - Nếu lựa chọn là 2 thì in ra mã sinh viên được sửa
//     - Nếu lựa chọn là 3 thì in ra danh sách theo mô tả dưới đây (các thông tin cách nhau một khoảng trắng)

// Ví dụ:
// Input:
// 1
// 2
// nguyen van hai
// 8.5 5.5 7.5
// tran van tuan
// 8.5 .50 9.0
// 2
// 2
// tran van nam
// 5.5 5.0 6.0
// 3
// Output:
// 2
// 2
// 2 tran van nam 5.5 5.0 6.0
// 1 nguyen van hai 8.5 5.5 7.5

#include<stdio.h>
#include<string.h>

struct student {
    int id;
    char name[100];
    float score1;
    float score2;
    float score3;
    float total;
};

void printStudent(struct student student){
    printf("%d %s %.1f %.1f %.1f\n", student.id, student.name, student.score1, student.score2, student.score3);
}

void sort(struct student students[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        struct student tmp = students[i];
        while(j >= 0 && students[j].total > tmp.total){
            students[j + 1].id = students[j].id;
            strcpy(students[j + 1].name, students[j].name);
            students[j + 1].score1 = students[j].score1;            
            students[j + 1].score2 = students[j].score2;            
            students[j + 1].score3 = students[j].score3;            
            students[j + 1].total = students[j].total;      

            j--;      
        }
        students[j + 1].id = tmp.id;
        strcpy(students[j + 1].name, tmp.name);
        students[j + 1].score1 = tmp.score1;            
        students[j + 1].score2 = tmp.score2;            
        students[j + 1].score3 = tmp.score3;            
        students[j + 1].total = tmp.total;  
    }
}

void main(){
    struct student students[10000];
    int count = 0;
    int n;
    while(1){
        scanf("%d", &n);
        if(n == 1){
            int n1;
            scanf("%d", &n1);
            for(int i = 0; i < n1; i++){
                getchar();
                students[count].id = count + 1;
                fgets(students[count].name, sizeof(students[count].name) + 1, stdin);
                students[count].name[strcspn(students[count].name, "\n")] = 0;
                scanf("%f %f %f", &students[count].score1, &students[count].score2, &students[count].score3);
                students[count].total = students[count].score1 + students[count].score2 + students[count].score3;
                count++;
            }
            printf("%d\n", n1);
        }
        else if(n == 2){
            int n2;
            scanf("%d", &n2);
            int index = n2 - 1;
            char name[100];
            getchar();
            fgets(name, sizeof(name) + 1, stdin);
            name[strcspn(name, "\n")] = 0;
            float score1, score2, score3;
            scanf("%f %f %f", &score1, &score2, &score3);

            strcpy(students[index].name, name);
            students[index].score1 = score1;
            students[index].score2 = score2;
            students[index].score3 = score3;
            students[index].total = score1 + score2 + score3;
            printf("%d\n", n2);
        }
        else if(n == 3){
            sort(students, count);
            for(int i = 0; i < count; i++){
                printStudent(students[i]);
            }
            break;
        }
    }
}