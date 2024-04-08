#include<stdio.h>

int main() {
  int num;
  printf("Welcome to summing odd numbers\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  int i = 1;
  int sum = 0;
  while (i <= num) {
    sum += i;
    i += 2;
  }

  printf("The sum of all odd numbers from 1 to %d is %d", num, sum);

  return 0;
}