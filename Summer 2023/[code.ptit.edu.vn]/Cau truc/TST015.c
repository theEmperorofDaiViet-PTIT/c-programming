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