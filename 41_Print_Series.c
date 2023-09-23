#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printf("[");
    for(i = 1; i <= n; i++) {
        printf("%d", i * i);
        if (i < n) {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}