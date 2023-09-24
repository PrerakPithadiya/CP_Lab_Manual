#include<stdio.h>
#include<stdbool.h>
int main(){
    bool a = true;
    bool b = false;
    printf("%d && %d : %d\n", a, b, a && b);
    printf("%d || %d : %d\n", a, b, a || b);
    printf("!%d : %d\n", a, !a);
    printf("!%d : %d\n", b, !b);
    return 0;
}