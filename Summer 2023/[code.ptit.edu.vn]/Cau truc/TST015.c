// BẢN GHI

// Cho một tập N bộ 3 số là các cạnh của một tam giác.
// Định nghĩa kiểu dữ liệu bản ghi có thẻ là tamgiac với thành phần trường dữ liệu là a, b, c là ba cạnh
// Xây dựng hàm nhập thông tin cho bản ghi tam giác
// Xây dựng hàm tính diện tích cho tam giác
// Xây dựng hàm in thông tin tam giác theo định dạng (a,b,c) ra màn hình
// Xây dựng hàm ghi tập bản ghi tam giác vào file có tên FPLSP22GxxmsvTG.fpl, file nhị phân.
// Áp dụng các hàm xây dựng được, đọc thông tin vào cho các bản ghi, in ra lần lượt các bộ cạnh tam giác theo thứ tự diện tích tăng dần

// Vào:
// Gồm 02 dòng, dòng đầu là số bộ số, các dòng tiếp theo là ba bộ số tương ứng là ba cạnh của tam giác, cách nhau bởi dấu cách
// Ra:
// Các dòng tương ứng các cạnh của tam giác theo thứ tự diện tích tăng dần

// Ví dụ:
// In:
// 2
// 9 9 9
// 3 4 5
// Out:
// 3 4 5
// 9 9 9

#include<stdio.h>
#include<math.h>

struct triangle {
    double firstEdge;
    double secondEdge;
    double thirdEdge;
    double area;
};

void setEdges(struct triangle *triangle, double firstEdge, double secondEdge, double thirdEdge);
void getArea(struct triangle *triangle);
void sort(struct triangle triangles[], int n);

void main(){
    int n;
    scanf("%d", &n);
    struct triangle triangles[n];
    for(int i = 0; i < n; i++){
        double a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        setEdges(&triangles[i], a, b, c);
        getArea(&triangles[i]);
    }
    sort(triangles, n);
    for(int i = 0; i < n; i++){
        printf("%.lf %.lf %.lf\n", triangles[i].firstEdge, triangles[i].secondEdge, triangles[i].thirdEdge);
    }
}

void setEdges(struct triangle *triangle, double firstEdge, double secondEdge, double thirdEdge){
    triangle->firstEdge = firstEdge;
    triangle->secondEdge = secondEdge;
    triangle->thirdEdge = thirdEdge;
}

void getArea(struct triangle *triangle){
    double s = (triangle->firstEdge + triangle->secondEdge + triangle->thirdEdge) / 2;
    triangle->area = sqrt(s * (s - triangle->firstEdge) * (s - triangle->secondEdge) * (s - triangle->thirdEdge));
}

void sort(struct triangle triangles[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(triangles[i].area > triangles[j].area){
                struct triangle tmp = triangles[i];
                triangles[i] = triangles[j];
                triangles[j] = tmp;
            }
        }
    }
}