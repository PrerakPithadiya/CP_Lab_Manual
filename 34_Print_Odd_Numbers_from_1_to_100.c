#include<stdio.h>
int main(){
    printf("Odd Numbers from 1 to 100 are : \n");
    int i = 1;
    for(; i <= 100; i = i + 2){
        printf("%d ", i);
    }
    return 0;
}