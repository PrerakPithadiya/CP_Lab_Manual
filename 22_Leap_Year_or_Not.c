#include<stdio.h>
#include<stdbool.h>
int main(){
    int year;
    printf("Enter the Seconds : ");
    scanf("%d", &year);
    bool isLeapYear = isLeap(year);
    if(isLeapYear == true){
        printf("Year '%d' is Leap!");
    } else{
        printf("Year '%d' isn't Leap!");
    }
    return 0;
}