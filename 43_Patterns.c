#include<stdio.h>
int main(){
    int n, i, j;
    printf("Enter the Number of Rows : ");
    scanf("%d", &n);

    // pattern 1
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("%d ", j * j);
        }
        printf("\n");
    }
    printf("\n\n");

    // pattern 2
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            printf("%d ", i * 2);
        }
        printf("\n");
    }
    printf("\n\n");

    // pattern 3
    int a = 1;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", a++);
        }
        printf("\n");
    }
    printf("\n\n");

    // pattern 4
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", i)
        }
        printf("\n");
    }
    return 0;
}