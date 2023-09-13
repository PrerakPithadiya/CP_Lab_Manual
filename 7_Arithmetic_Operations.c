#include<stdio.h>
int main(){
    int a, b;
    printf("Enter First Value : ");
    scanf("%d", &a);
    printf("Enter Second Value : ");
    scanf("%d", &b);
    printf("\nArithmetic Operations : \n");
    printf("Addition : %d\n", a + b);
    printf("Substraction : %d\n", a - b);
    printf("Multiplication : %d\n", a * b);
    printf("Division : %d\n", a / b);
    printf("Remainder : %d", a % b);
    return 0;
}