#include<stdio.h>

void increment(int);

int main() {
  int num;
  printf("Welcome to showing call by value");
  printf("\nPlease enter the number: ");
  scanf("%d", &num);

  printf("\nBefore: Value of num is %d", num);
  increment(num);
  printf("\nAfter: Value of num is %d", num);
  return 0;
}

void increment(int a) {
  printf("\nIn function Before: Value of a is %d", a);
  a++;
  printf("\nIn function After: Value of a is %d", a);
}
