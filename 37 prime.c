#include<stdio.h>

int main() {
  int num;
  printf("Welcome to Prime Checker\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  int i = 2;
  while (i < num) {
    if (num % i == 0) {
      printf("%d is not prime", num);
      return 0;
    }
    i++;
  }

  printf("%d is prime", num);
  return 0;
}