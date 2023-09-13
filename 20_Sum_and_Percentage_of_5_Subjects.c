#include<stdio.h>
int main(){
    int sub1, sub2, sub3, sub4, sub5;
    printf("Sub 1 : ");
    scanf("%d", &sub1);
    
    printf("Sub 2 : ");
    scanf("%d", &sub2);

    printf("Sub 3 : ");
    scanf("%d", &sub3);

    printf("Sub 4 : ");
    scanf("%d", &sub4);

    printf("Sub 5 : ");
    scanf("%d", &sub5);

    int sum = sub1 + sub2 + sub3 + sub4 + sub5;
    float percentage = sum / 5.0;

    printf("\nSum : %d\n", sum);
    printf("Percentage : %f", percentage);
    return 0;
}