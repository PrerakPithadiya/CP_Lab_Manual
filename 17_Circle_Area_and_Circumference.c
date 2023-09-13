#include<stdio.h>
int main(){
    int r;
    printf("Enter Circle Radios : ");
    scanf("%d", &r);
    float pI = 3.1415, area = pI * r * r, cir = 2 * pI * r;
    printf("Area of Circle : %2f\n", area);
    printf("Circumference of Circle : %2f", cir);
    return 0;
}