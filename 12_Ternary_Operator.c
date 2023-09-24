#include<stdio.h>
int main(){
    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    int max = (a > b) ? a : b;
    printf("Max Number : %d", max);
    return 0;
}