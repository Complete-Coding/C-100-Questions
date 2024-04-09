#include<stdio.h>

long factorial(int);

int main() {
  int num;
  printf("Welcome to Factorial world!\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  long result = factorial(num);
  printf("The factorial of %d is %ld", num, result);
  return 0;
}

long factorial(int num) {
  if (num <= 1) {
    return 1;
  }
  return num * factorial(num - 1);
}