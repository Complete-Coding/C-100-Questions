#include<stdio.h>

int main() {
  float first, second;
  char opr;
  printf("Welcome to calculator\n");
  printf("Please enter the first number: ");
  scanf("%f", &first);
  printf("Now, enter the second number: ");
  scanf("%f", &second);
  printf("Finally, enter the operation(+, -, *, /): ");
  scanf(" %c", &opr);

  float res;
  int invalid = 0;
  switch (opr)
  {
  case '+': res = first + second;
    break;
  case '-': res = first - second;
    break;
  case '*': res = first * second;
    break;
  case '/': res = first / second;
    break;
  default:
    invalid = 1;
    break;
  }
  
  if (invalid == 0) {
    printf("The result is: %.2f", res);
  } else {
    printf("Invalid operator, please enter (+, -, *, /)");
  }
  return 0;
}