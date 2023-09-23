#include <stdio.h>
int main() {
  int a, b;
  char op;
  printf("Enter the Operator : ");
  scanf("%c", &op);
  printf("Enter First Number : ");
  scanf("%d", &a);
  printf("Enter Second Number : ");
  scanf("%d", &b);

  switch (op) {
  case '+':
    printf("Addition is : %d", a + b);
    break;

  case '-':
    printf("Substraction is : %d", a - b);
    break;

  case '*':
    printf("Multiplication is : %d", a * b);
    break;

  case '/':
    printf("Division is : %d", a / b);
    break;

  default:
    printf("Invalid Operator!");
  }
  return 0;
}