// TỔNG ĐA THỨC

// Cho hai đa thức có bậc không quá 10000 (chỉ viết ra các phần tử có hệ số khác 0). Hãy tính tổng hai đa thức đó.
// Input: 
// Dòng đầu ghi số bộ test. Mỗi bộ test có hai dòng, mỗi dòng ghi một đa thức theo mẫu như trong ví dụ. 
// Chú ý: Bậc của các hạng tử luôn theo thứ tự giảm dần, trong đa thức chỉ có phép cộng và luôn được viết đầy đủ hệ số + số mũ (kể cả mũ 0).
// Output: 
// Ghi ra một dòng đa thức tổng tính được (theo mẫu như ví dụ)

// Ví dụ:
// Input:
// 1
// 3*x^8 + 7*x^2 + 4*x^0
// 11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
// Output:
// 3*x^8 + 11*x^6 + 16*x^2 + 2*x^1 + 7*x^0

#include<stdio.h>
#include<string.h>
#include<math.h>

struct monomial {
    int coefficient;
    int exponent;
};

struct polynomial {
    struct monomial monomials[10005];
    int lastValue;
};

int stringToInt(char s[]);

struct polynomial addPolynomials(struct polynomial *p1, struct polynomial *p2){
    struct polynomial res;
    for(int i = 10004; i >= 0; i--){
        res.monomials[i].coefficient = p1->monomials[i].coefficient + p2->monomials[i].coefficient;
        res.monomials[i].exponent = i;
        if(res.monomials[i].coefficient != 0){
            res.lastValue = i;
        }
    }
    return res;
}

void main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
        char s1[100000] = "", s2[100000] = "";
        char* a1[100000], a2[100000];
        fgets(s1, sizeof(s1) + 1, stdin);
        fgets(s2, sizeof(s2) + 1, stdin);

        struct polynomial p1;
        for(int i = 0; i < 10005; i++){
            p1.monomials[i].exponent = i;
            p1.monomials[i].coefficient = 0;
        }
        char* temp_monomial1[10005];
        int index1 = 0;
        char* token1 = strtok(s1, " +\n");
        while(token1 != NULL){
            temp_monomial1[index1] = token1;
            index1++;
            token1 = strtok(NULL, " +\n");
        }
        for(int i = 0; i < index1; i++){
            int coefficient = stringToInt(strtok(temp_monomial1[i], "*x^"));
            int exponent = stringToInt(strtok(NULL, "*x^"));
            p1.monomials[exponent].coefficient = coefficient;
            p1.monomials[exponent].exponent = exponent;
        }

        struct polynomial p2;
        for(int i = 0; i < 10005; i++){
            p2.monomials[i].exponent = i;
            p2.monomials[i].coefficient = 0;
        }
        char* temp_monomial2[10005];
        int index2 = 0;
        char* token2 = strtok(s2, " +\n");
        while(token2 != NULL){
            temp_monomial2[index2] = token2;
            index2++;
            token2 = strtok(NULL, " +\n");
        }
        for(int i = 0; i < index2; i++){
            int coefficient = stringToInt(strtok(temp_monomial2[i], "*x^"));
            int exponent = stringToInt(strtok(NULL, "*x^"));
            p2.monomials[exponent].coefficient = coefficient;
            p2.monomials[exponent].exponent = exponent;
        }

        struct polynomial res = addPolynomials(&p1, &p2);
        for(int i = 10004; i >= 0; i--){
            if(res.monomials[i].coefficient != 0){
                printf("%d*x^%d", res.monomials[i].coefficient, res.monomials[i].exponent);
                if(i > res.lastValue){
                    printf(" + ");
                }
                else{
                    printf("\n");
                    break;
                }
            }

        }

    }
}

int stringToInt(char s[]){
    int res = 0;
    int base = 0;
    for(int i = strlen(s) - 1; i >= 0; i--){
        res += (s[i] - 48) * pow(10, base);
        base++;
    }
    return res;
}