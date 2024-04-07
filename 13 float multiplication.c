#include<stdio.h>

int main() {
  float first, second;
  printf("Please enter the first number: ");
  scanf("%f", &first);
  printf("Now, enter the second number: ");
  scanf("%f", &second);

  float result = first * second;
  printf("\n Product is: %f", result);
  printf("\n Product is: %.2f", result);
  return 0;
}