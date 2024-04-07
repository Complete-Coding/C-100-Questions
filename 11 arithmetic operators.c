#include<stdio.h>

int main() {
  int first, second;
  printf("Please enter the first number: ");
  scanf(" %d", &first);
  printf("Now, enter the second number: ");
  scanf(" %d", &second);

  printf("Here are the results of the operations");
  printf("\n%d + %d = %d", first, second, (first + second));
  printf("\n%d - %d = %d", first, second, (first - second));
  printf("\n%d * %d = %d", first, second, (first * second));
  printf("\n%d / %d = %d", first, second, (first / second));
  printf("\n%d modulo %d = %d", first, second, (first % second));
  return 0;
}