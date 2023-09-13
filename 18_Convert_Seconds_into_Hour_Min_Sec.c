#include<stdio.h>
int main(){
    int seconds;
    printf("Enter Seconds : ");
    scanf("%d", &seconds);
    int sec = seconds % 60;
    int hour = seconds / 60;
    int min = hour % 60;
    hour = hour / 60;
    printf("\nTime : [%d : %d : %d]", hour, min, sec);
    return 0;
}