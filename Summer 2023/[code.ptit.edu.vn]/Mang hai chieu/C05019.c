#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        printf("Test %d:\n", t);
        int n;
        scanf("%d", &n);
        int a[n][n];
        int i = 0, j = 0, k = 2, count = 0;
        char direction = 'R';
        int max = n, min = 0;
        while(count < n * n){
            a[i][j] = k;
            while(true){
                k = (k == 2) ? k + 1 : k + 2;
                if(isPrime(k)){
                    break;
                }
            }
            count++;
            if(i < max - 1 && j == max - 1){
                direction = 'D';
            }
            else if(i == max - 1 && j == max - 1){
                direction = 'L';
            }
            else if(i == max - 1 && j == min){
                direction = 'U';
            }
            else if(i == min + 1 && j == min){
                direction = 'R';
                min++;
                max--;
            }
            switch (direction){
                case 'R':
                    j++;
                    break;
                
                case 'D':
                    i++;
                    break;
                case 'L':
                    j--;
                    break;
                case 'U':
                    i--;
                    break;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
}

bool isPrime(int n){
    if(n < 2){
        return false;
    }
    else if(n % 2 == 0){
        if(n == 2)  return true;
        else    return false;
    }
    else{
        for(int i = 3; i <= sqrt(n); i += 2){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}