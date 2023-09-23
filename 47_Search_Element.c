#include<stdio.h>
int main(){
    int size, target, index = -1;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d Elements : ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the Element : ");
    scanf("%d", &target);
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    if(index == -1){
        printf("The Element isn't found in Array!\n");
    } else{
        printf("The Element is found at index %d\n", index);
    }
    return 0;
}