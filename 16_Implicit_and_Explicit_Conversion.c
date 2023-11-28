#include<stdio.h>
int main(){
    int x, b;
    float a;
    a = 5 / 2;
    x = (int)7.5;
    b = (int)(a + 3.3);
    printf("a = %.2f\n", a);
    a = (float)5 / 2;
    printf("a = %.2f\n", a);
    printf("x = %d\n", x);
    printf("b = %d\n", b);
    return 0;
}