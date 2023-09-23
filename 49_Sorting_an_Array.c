#include<stdio.h>
void printArray(int arr[], int n){
    printf("[");
    for(int i = 0; i < n; i++){
        printf("%d", arr[i]);
        if(i < n - 1){
            printf(", ");
        }
    }
    printf("]\n");
}
int main(){
    int size;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    // sorting array in ascending order
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Ascending Ordered Array : ");
    printArray(arr, size);

    // sorting array in descending order
    for(int i = 0; i < size - 1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Descending Ordered Array : ");
    printArray(arr, size);
    return 0;
}