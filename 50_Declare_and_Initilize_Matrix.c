#include<stdio.h>
int main(){
    int rows, cols;
    printf("Enter Rows : ");
    scanf("%d", &rows);
    printf("Enter Columns : ");
    scanf("%d", &cols);
    int mat[rows][cols];
    printf("Enter %d Elements : ", rows * cols);
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Matrix is : \n");
    for(int i = 0; i < rows; i++){
        printf("[");
        for(int j = 0; j < cols; j++){
            printf("%d", mat[i][j]);
            if(j < cols - 1){
                printf(", ");
            }
        }
        printf("]\n");
    }
    return 0;
}