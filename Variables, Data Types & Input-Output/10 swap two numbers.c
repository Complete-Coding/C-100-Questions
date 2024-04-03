#include<stdio.h>

int main() {
  int first, second, temp;
  printf("Please enter the first number: ");
  scanf("%d", &first);
  printf("Now, enter the second number: ");
  scanf("%d", &second);

  // Swapping
  temp = first;
  first = second;
  second = temp;

  printf("The value of first is %d and second is %d", first, second);
  return 0;
}