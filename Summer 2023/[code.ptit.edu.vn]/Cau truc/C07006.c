// DIỆN TÍCH TAM GIÁC

// Cho 3 điểm A, B, C trong không gian 2 chiều Oxy, hãy tính diện tích tam giác được tạo bởi 3 điểm đó.
// Công thức Heron tính diện tích tam giác khi biết độ dài 3 cạnh là a, b, c.

// Dữ liệu vào
//     - Dòng đầu ghi số bộ test, không quá 10
//     - Mỗi bộ test ghi trên 1 dòng 6 số thực có giá trị tuyệt đối không quá 1000 lần lượt là tọa độ của 3 điểm A, B, C. 
// Kết quả
//     - Nếu 3 điểm không thể tạo thành tam giác thì in ra INVALID
//     - Nếu 3 điểm tạo thành 1 tam giác thì in ra diện tích của tam giác đó, làm tròn đến 2 chữ số phần thập phân.

// Ví dụ:
// Input:
// 3
// 0 0 0 5 0 199
// 1 1 1 1 1 1
// 0 0 0 5 5 0
// Output:
// INVALID
// INVALID
// 12.50

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

struct triangle {
    double firstEdge;
    double secondEdge;
    double thirdEdge;
    double area;   
};

void getEdges(struct triangle *triangle, double x1, double y1, double x2, double y2, double x3, double y3){
    triangle->firstEdge = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    triangle->secondEdge = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    triangle->thirdEdge = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
}

void getArea(struct triangle *triangle){
    double s = (triangle->firstEdge + triangle->secondEdge + triangle->thirdEdge) / 2;
    triangle->area = sqrt(s * (s - triangle->firstEdge) * (s - triangle->secondEdge) * (s - triangle->thirdEdge));
}

bool isValid(struct triangle *triangle){
    if(triangle->firstEdge + triangle->secondEdge <= triangle->thirdEdge){
        return false;
    }
    if(triangle->secondEdge + triangle->thirdEdge <= triangle->firstEdge){
        return false;
    }
    if(triangle->thirdEdge + triangle->firstEdge <= triangle->secondEdge){
        return false;
    }
    return true;
}

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        struct triangle triangle;
        double x1, y1, x2, y2, x3, y3;
        scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
        getEdges(&triangle, x1, y1, x2, y2, x3, y3);
        if(isValid(&triangle)){
            getArea(&triangle);
            printf("%.2lf\n", triangle.area);
        }
        else{
            printf("INVALID\n");
        }

    }
}