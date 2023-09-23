#include<stdio.h>
int main(){
    char ch;
    printf("Enter the Character : ");
    scanf("%c", &ch);
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("The Character is Vowel!");
    } else{
        printf("The Character is Consotant!");
    }
    return 0;
}