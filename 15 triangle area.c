#include<stdio.h>

int main() {
  int b, h;
  printf("Welcome to Area of Triangle calculation.\n");
  printf("Please enter the height: ");
  scanf("%d", &h);
  printf("Now, enter the breadth: ");
  scanf("%d", &b);

  float area = 0.5 * b * h;
  printf("\n Area of your traingle is: %.2f", area);
  return 0;
}