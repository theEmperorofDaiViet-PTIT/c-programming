#include<stdio.h>
#include<stdbool.h>
#include<math.h>

struct fraction {
    int numerator;
    int denominator;
};

int gcd(int a, int b);
int lcm(int a, int b);

void simplify(struct fraction *f){
    int GCD = gcd(f->numerator, f->denominator);
    f->numerator /= GCD;
    f->denominator /= GCD;
}

void reduce(struct fraction *f1, struct fraction *f2){
    int new_denominator = lcm(f1->denominator, f2->denominator);
    f1->numerator *= new_denominator / f1->denominator;
    f1->denominator = new_denominator;
    f2->numerator *= new_denominator / f2->denominator;
    f2->denominator = new_denominator;
}

struct fraction sum(struct fraction f1, struct fraction f2){
    struct fraction res = {
        f1.numerator + f2.numerator,
        f1.denominator
    };
    simplify(&res);
    return res;
}

struct fraction divide(struct fraction f1, struct fraction f2){
    struct fraction res = {
        f1.numerator * f2.denominator,
        f1.denominator * f2.numerator
    };
    simplify(&res);
    return res;
}

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        struct fraction p, q;
        scanf("%d %d %d %d", &p.numerator, &p.denominator, &q.numerator, &q.denominator);
        simplify(&p);
        simplify(&q);
        reduce(&p, &q);
        
        printf("Case #%d:\n", t);
        printf("%d/%d %d/%d\n", p.numerator, p.denominator, q.numerator, q.denominator);
        printf("%d/%d\n", sum(p, q).numerator, sum(p, q).denominator);
        printf("%d/%d\n", divide(p, q).numerator, divide(p, q).denominator);
    }
}

int gcd(int a, int b){
    if(a == b)
        return a;
    else if(a > b)
        return gcd(a - b, b);
    else  
        return gcd(a, b - a);
}

int lcm(int a, int b){
    return a * b / gcd(a, b);
}