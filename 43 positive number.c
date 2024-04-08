#include<stdio.h>

int main() {
  int num;
  printf("Welcome to Ziddi number checker.\n");

  do {
    printf("Please enter positive number: ");
    scanf("%d", &num);
  } while(num <= 0);

  printf("You have sucessfully entered a positive number");

  return 0;
}