#include<stdio.h>

int main() {
  const float PI = 3.14159;
  int radius;

  printf("Please enter the radius of the circle in cms: ");
  scanf("%d", &radius);
  printf("The area of your circle is %f cm2",
    PI * radius * radius);
  return 0;
}