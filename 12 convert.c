#include<stdio.h>

int main() {
  int number;
  printf("Please enter a number: ");
  scanf("%d", &number);

  float floating = number;
  printf("\n Original number is: %d", number);
  printf("\n float converted is: %f", floating);
  printf("\n float converted is: %f", (float) number);
  return 0;
}