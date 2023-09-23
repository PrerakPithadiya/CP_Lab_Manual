#include<stdio.h>
int main(){
    // Question 1 -> print numbers from 1 to 10
    printf("Numbers from 1 to 10 : \n");
    int i;
    for(i = 1; i <= 10; i++){
        printf("%d ", i);
    }

    // Question 2 -> print numbers from 10 to 1
    printf("\n\nNumber from 10 to 1 : \n");
    for(i = 10; i >= 1; i--){
        printf("%d ", i);
    }
    return 0;
}