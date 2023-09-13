#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("\nResult : Even Number!");
    } else{
        printf("\nResult : Odd Number!");
    }
    return 0;
}