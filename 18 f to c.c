#include<stdio.h>

int main() {
  float f;
  printf("Welcome to Temperature Converter.\n");
  printf("Please enter temp in F: ");
  scanf("%f", &f);

  float c = (f - 32) * 5 / 9;
  printf("\n Temp in C is: %.2f", c);
  return 0;
}