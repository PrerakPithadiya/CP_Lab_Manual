#include<stdio.h>
int main(){
    int day;
    printf("Enter the Day Number : ");
    scanf("%d", &day);
    switch(day){
        case 1 : printf("Day : Monday!");
        break;

        case 2 : printf("Day : Tuesday!");
        break;

        case 3 : printf("Day : Wednesday!");
        break;

        case 4 : printf("Day : Thursday!");
        break;

        case 5 : printf("Day : Friday!");
        break;

        case 6 : printf("Day : Saturday!");
        break;

        case 7 : printf("Day : Sunday!");
        break;

        default : printf("Invalid Day Number..!");
    }
    return 0;
}