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