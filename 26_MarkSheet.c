#include<stdio.h>
int main(){
    int marks;
    char grade;
    printf("Enter Your Marks : ");
    scanf("%d", &marks);
    if(marks >= 80 && marks <= 100){
        grade = 'A';
    } else if(marks >= 60 && marks < 80){
        grade = 'B';
    } else if(marks >= 40 && marks < 60){
        grade = 'C';
    } else{
        grade = 'D';
    }
    printf("Your Grade is : %c\n", grade);
    return 0;
}