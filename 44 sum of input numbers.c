#include<stdio.h>

int main() {
  int num;
  int sum = 0;
  printf("Welcome to Number Adder\n");

  do {
    printf("Please enter your number: ");
    scanf("%d", &num);
    sum += num;
  } while(num != 0);

  printf("The sum of all your numbers is: %d", sum);
  return 0;
}