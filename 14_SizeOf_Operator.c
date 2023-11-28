#include<stdio.h>
int main(){
    short int a;
    long int b;
    char c;
    printf("Size of \"short int\" is %d bytes\n", sizeof(a));
    printf("Size of \"long int\" is %d bytes\n", sizeof(b));
    printf("Size of \"char\" is %d byte\n", sizeof(c));
    return 0;
}