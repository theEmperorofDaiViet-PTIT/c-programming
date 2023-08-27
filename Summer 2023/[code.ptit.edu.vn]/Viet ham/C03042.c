#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

bool check(int n);

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a, b;
        scanf("%d %d", &a, &b);
        int count = 0;
        for(int i = a; i <= b; i++){
            if(check(i)){
                count++;
            }
        }
        printf("%d\n", count);
    }

}

bool check(int n){
    while(n / 10 > 0){
        if(n % 10 >= n / 10 % 10){
            return false;
        }
        n /= 10;
    }
    return true;
}