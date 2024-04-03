#include <stdio.h>

int main() {
  int first, second;
  printf("Please enter the first number: ");
  scanf("%d", &first);
  printf("Now, enter the second number: ");
  scanf("%d", &second);

  printf("The two numbers you entered are %d and %d", first, second);
  return 0;
}