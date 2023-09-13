#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Enter Value of 'A' : ");
    scanf("%d", &a);
    printf("Enter Value of 'B' : ");
    scanf("%d", &b);

    // swaping values
    temp = a;
    a = b;
    b = temp;

    printf("\nValue of 'A' : %d\n", a);
    printf("Value of 'B' : %d", b);
    return 0;
}