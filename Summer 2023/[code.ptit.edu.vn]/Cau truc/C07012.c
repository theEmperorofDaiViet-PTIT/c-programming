#include<stdio.h>
#include<string.h>

struct product {
    int id;
    char name[100];
    char category[100];
    float purchasePrice;
    float sellingPrice;
    float profit;
};

void printProduct(struct product product){
    printf("%d %s %s %.2f\n", product.id, product.name, product.category, product.profit);
}

void sort(struct product products[], int n);

void main(){
    int n;
    scanf("%d", &n);
    struct product products[n];
    for(int i = 0; i < n; i++){
        products[i].id = i + 1;
        getchar();
        fgets(products[i].name, sizeof(products[i].name) + 1, stdin);
        products[i].name[strcspn(products[i].name, "\n")] = 0;
        fgets(products[i].category, sizeof(products[i].category) + 1, stdin);
        products[i].category[strcspn(products[i].category, "\n")] = 0;
        scanf("%f", &products[i].purchasePrice);
        scanf("%f", &products[i].sellingPrice);
        products[i].profit = products[i].sellingPrice - products[i].purchasePrice;
    }
    sort(products, n);
    for(int i = 0; i < n; i++){
        printProduct(products[i]);
    }
}

void sort(struct product products[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        struct product tmp = products[i];
        while(j >= 0 && products[j].profit < tmp.profit){
            products[j + 1].id = products[j].id;
            strcpy(products[j + 1].name, products[j].name);
            strcpy(products[j + 1].category, products[j].category);
            products[j + 1].purchasePrice = products[j].purchasePrice;
            products[j + 1].sellingPrice = products[j].sellingPrice;
            products[j + 1].profit = products[j].profit;
            j--;
        }
        products[j + 1].id = tmp.id;
        strcpy(products[j + 1].name, tmp.name);
        strcpy(products[j + 1].category, tmp.category);
        products[j + 1].purchasePrice = tmp.purchasePrice;
        products[j + 1].sellingPrice = tmp.sellingPrice;
        products[j + 1].profit = tmp.profit;
    }
}