#include<stdio.h>
int main(){
    int n, i, j;
    printf("Enter the Number of Rows : ");
    scanf("%d", &n);

    // pattern 1
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    // pattern 2
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    // pattern 3
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    // pattern 4
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n || j == i || j == n + 1 - i){
                printf("* ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}