#include<stdio.h>
#include<stdbool.h>
int main(){
    int a = 5, b = 7;
    printf("%d < %d : %d\n", a, b, a < b);
    printf("%d <= %d : %d\n", a, b, a <= b);
    printf("%d > %d : %d\n", a, b, a > b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    return 0;
}