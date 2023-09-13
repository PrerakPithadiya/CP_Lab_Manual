#include<stdio.h>
int main(){
    int a, b, c, max;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);
    printf("Enter Third Number : ");
    scanf("%d", &c);

    if(a > b && a > c){
        max = a;
    } else if(b > c){
        max = b;
    } else{
        max = c;
    }
    
    printf("\nMaximum Number : %d", max);
    return 0;
}