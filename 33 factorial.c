#include<stdio.h>

int main() {
  int num;
  printf("Welcome to the world of Factorial\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  int i = 2;
  int fact = 1;
  while (i <= num) {
    fact *= i;
    i++;
  }

  printf("The factorial of %d is %d", num, fact);
  return 0;
}