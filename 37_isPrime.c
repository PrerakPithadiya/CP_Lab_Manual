#include<stdio.h>
void main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("Result : ");
    if(n == 1){
        printf("Not Prime!");
        return;
    } if(n == 2 || n == 3){
        printf("Prime!");
        return;
    } if(n % 2 == 0 || n % 3 == 0){
        printf("Not Prime!");
        return;
    } for(i = 5; i * i <= n; i = i + 6){
        if(n % i == 0 || n % (i + 2) == 0){
                printf("Not Prime!");
                return;
        }
    }
    printf("Prime!");
}