#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number of Rows : ");
    scanf("%d", &n);

    // pattern 1
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("A ");
        }
        printf("\n");
    }

    printf("\n\n");

    // pattern 2
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= i; j++){
            printf("%c ", ch++);
        }
        printf("\n");
    }

    printf("\n\n");

    // pattern 4
    char ch = 'A';
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 6; j++){
            printf("%c ", ch++);
            if(ch == '['){ break; }
        }
        printf("\n");
    }
    return 0;
}