// CHU VI TAM GIÁC

// Cho 3 điểm A, B, C trong không gian 2 chiều Oxy, hãy tính chu vi tam giác được tạo bởi 3 điểm đó.

// Dữ liệu vào
//     - Dòng đầu ghi số bộ test, không quá 10
//     - Mỗi bộ test ghi trên 1 dòng 6 số thực có giá trị tuyệt đối không quá 1000 lần lượt là tọa độ của 3 điểm A, B, C. 
// Kết quả
//     - Nếu 3 điểm không thể tạo thành tam giác thì in ra INVALID
//     - Nếu 3 điểm tạo thành 1 tam giác thì in ra chu vi của tam giác đó, làm tròn đến 3 chữ số phần thập phân.

// Ví dụ:
// Input:
// 3
// 0 0 0 5 0 199
// 1 1 1 1 1 1
// 0 0 0 5 5 0
// Output:
// INVALID
// INVALID
// 17.071

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

struct triangle {
    float firstEdge;
    float secondEdge;
    float thirdEdge;
    float perimeter;   
};

void getEdges(struct triangle *triangle, float x1, float y1, float x2, float y2, float x3, float y3){
    triangle->firstEdge = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    triangle->secondEdge = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    triangle->thirdEdge = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
}

void getPerimeter(struct triangle *triangle){
    triangle->perimeter = triangle->firstEdge + triangle->secondEdge + triangle->thirdEdge;
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
        float x1, y1, x2, y2, x3, y3;
        scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
        getEdges(&triangle, x1, y1, x2, y2, x3, y3);
        if(isValid(&triangle)){
            getPerimeter(&triangle);
            printf("%.3f\n", triangle.perimeter);
        }
        else{
            printf("INVALID\n");
        }

    }
}