#include<stdio.h>
#include<limits.h>

int main() {
  unsigned int positive = UINT_MAX;
  int normal = INT_MAX;

  printf("Max value of unsigned int is: %u", positive);
  printf("\nMax value of normal int is: %d", normal);

  positive++;
  normal++;

  printf("\n\nMax value of unsigned int is: %u", positive);
  printf("\nMax value of normal int is: %d", normal);
  return 0;
}