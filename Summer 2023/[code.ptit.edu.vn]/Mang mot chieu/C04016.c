#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int n);
void* sort(int a[], int count[], int n);

void main(){
    int T;
    scanf("%d", &T);
    for(int t = 1; t <= T; t++){
        int n;
        scanf("%d", &n);
        int a[n], count[n];
        bool checked[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
            count[i] = 0;
            checked[i] = false;
        }

        for(int i = 0; i < n; i++){
            if(isPrime(a[i]) == false || checked[i] == true){
                continue;
            }
            count[i]++;
            for(int j = i + 1; j < n; j++){
                if(a[j] == a[i]){
                    count[i]++;
                    checked[i] = true;
                    checked[j] = true;
                }
            }
        }
        sort(a, count, n);
        printf("Test %d:\n", t);
        for(int i = 0; i < n; i++){
            if(count[i] > 0){
                printf("%d xuat hien %d lan\n", a[i], count[i]);
            }
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

void* sort(int a[], int count[], int n){
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int tmp1 = a[i];
        int tmp2 = count[i];
        while(a[j] > tmp1 && j >= 0){
            a[j + 1] = a[j];
            count[j + 1] = count[j];
            j--;
        }
        a[j + 1] = tmp1;
        count[j + 1] = tmp2;
    }
}