#include<stdio.h>
int main(){
    // using of break keyword
    printf("Break KeyWord : \n");
    int i;
    for(i = 1; i <= 10; i++){
        if(i == 5){
            break;
        }
        printf("%d ", i);
    }

    // using of continue keyword
    printf("\n\nContinue KeyWord : \n");
    for(i = 1; i <= 10; i++){
        if(i == 5){
            continue;
        }
        printf("%d ", i);
    }
    return 0;
}