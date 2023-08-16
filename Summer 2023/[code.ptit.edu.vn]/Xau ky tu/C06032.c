#include<stdio.h>
#include<string.h>

void main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int m;
        scanf("%d", &m);
        char a[m][100];
        for(int i = 0; i < m; i++){
            scanf("%s", a[i]);
        }
        for(int i = 0; i < m; i++){
            for(int j = i + 1; j < m; j++){
                char s1[200], s2[200];
                strcpy(s1, a[i]);
                strcpy(s2, a[j]);
                strcat(s1, a[j]);
                strcat(s2, a[i]);
                char tmp[100] = "";
                if(strcmp(s1, s2) > 0){
                    strcpy(tmp, a[i]);
                    strcpy(a[i], a[j]);
                    strcpy(a[j], tmp);
                }
            }
        }
        for(int i = 0; i < m; i++){
            printf("%s", a[i]);
        }
        printf("\n");
    }
}