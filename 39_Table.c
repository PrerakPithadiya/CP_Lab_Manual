#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("Multiplication Table of %d is : \n", n);
    for(i = 1; i <= 10; i++){
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}