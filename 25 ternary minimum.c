#include<stdio.h>

int main() {
  int first, second;
  printf("Please enter the first number: ");
  scanf("%d", &first);
  printf("Now, enter the second number: ");
  scanf("%d", &second);

  int min = first < second ? first : second;
  printf("Minimum of the two is: %d", min);
  return 0;
}