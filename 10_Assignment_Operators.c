#include<stdio.h>
int main(){
    int a = 5;
    int b = 7;
    printf("a += b : %d\n", a += b);
    a = 5; b = 7;
    printf("a -= b : %d\n", a -= b);
    a = 5; b = 7;
    printf("a *= b : %d\n", a *= b);
    a = 5; b = 7;
    printf("a /= b : %d\n", a /= b);
    a = 5; b = 7;
    printf("a %= b : %d\n", a %= b);
    return 0;
}