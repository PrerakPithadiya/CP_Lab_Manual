#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    if(n > 0){
        printf("The Number is Positive!\n");
    } else{
        printf("The Number is Negative!\n");
    }
    return 0;
}