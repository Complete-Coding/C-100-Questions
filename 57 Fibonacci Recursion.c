#include<stdio.h>

int fibonacci(int pos);

int main() {
  int terms;
  printf("Welcome to Fibonacci by Recursion\n");
  printf("Enter the no of terms needed: ");
  scanf("%d", &terms);

  for (int i = 0; i < terms; i++) {
    printf(" %d", fibonacci(i));
  }
  return 0;
}

int fibonacci(int pos) {
  if (pos <= 1) {
    return pos;
  }
  int current = fibonacci(pos - 1) + fibonacci(pos - 2);
  return current;
}