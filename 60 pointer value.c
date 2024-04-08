#include<stdio.h>

int main() {
  int num = 5;
  int *ptr = &num;

  printf("\nValue of num is: %d", num);
  *ptr = 87;
  printf("\nValue of num is: %d", num);
  return 0;
}