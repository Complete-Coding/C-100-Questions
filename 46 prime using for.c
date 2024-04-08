#include<stdio.h>

int main() {
  int num;
  printf("Welcome to Prime Checker\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      printf("%d is not prime", num);
      return 0;
    }
  }
  printf("%d is prime", num);
  return 0;
}