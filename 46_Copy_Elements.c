#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5];
    for(int i = 0; i < 5; i++){
        brr[i] = arr[i];
    }
    printf("Copied Array is : [");
    for(int i = 0; i < 5; i++){
        printf("%d", brr[i]);
        if(i < 4){
            printf(", ");
        }
    }
    printf("]");
    return 0;
}