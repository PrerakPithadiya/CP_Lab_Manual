#include<stdio.h>
int main(){
    int size, i;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d Elements : \n", size);
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array is : [");
    for(i = 0; i < size; i++){
        printf("%d", arr[i]);
        if(i < size - 1){
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}