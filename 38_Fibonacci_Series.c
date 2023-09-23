#include<stdio.h>
void main(){
    int n;
    printf("Enter the Number of terms : ");
    scanf("%d", &n);
    if(n == 0){
        return;
    } if(n == 1){
        printf("[0]");
        return;
    } else if(n == 2){
        printf("[0, 1]");
        return;
    }
    int a = 0, b = 1, c = 0, i;
    printf("[0, 1, ");
    for(i = 3; i <= n; i++){
        c = a + b;
        printf("%d", c);
        if(i < n){ printf(", "); }
        a = b;
        b = c;
    } printf("]");
}