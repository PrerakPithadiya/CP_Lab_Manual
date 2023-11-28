#include<stdio.h>
int main(){
    int x = 5 % 4 + 5 / (1 + 2);
    int a, b = 4, c = 2, d = 2;
    a = b * c / d - 2 + b / c;
    int z = (10 + 10) / 10 * 10 - 10;
    printf("x = %d\n", x);
    printf("a = %d\n", a);
    printf("z = %d\n", z);
    return 0;
}