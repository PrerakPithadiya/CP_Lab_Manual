#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the First Number : ");
    scanf("%d", &a);
    printf("Enter the Second Number : ");
    scanf("%d", &b);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("~b = %d\n", ~b);
    printf("a << 2 = %d\n", a << 2);
    printf("b >> 2 = %d\n", b >> 2);
    return 0;
}