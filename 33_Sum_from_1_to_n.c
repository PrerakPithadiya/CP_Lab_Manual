#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the Number : ");
    scanf("%d", &n);

    // Method 1 -> sum from 1 to n (through loops)
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    printf("The Sum from 1 to %d is : %d", n, sum);

    // Method 2 -> sum from 1 to n (through math formula)
    sum = (n * (n + 1)) / 2;
    printf("\n\nThe Sum from 1 to %d is : %d\n", n, sum);
    return 0;
}