#include<stdio.h>

float max(float, float);

int main() {
  float a, b;
  printf("Welcome to finding the max element\n");
  printf("Please, enter the first number: ");
  scanf("%f", &a);
  printf("Now, enter the second number: ");
  scanf("%f", &b);

  printf("The larger number is %.2f", max(a, b));
  return 0;
}


float max(float first, float second) {
  return first > second ? first : second;
}