#include<stdio.h>

int main() {
  int num;
  printf("Welcome to the world of Squares\n\n");
  while (1) {
    printf("\nPlease enter the number: ");
    scanf("%d", &num);
    if (num == -1) break;
    printf("The square of %d is %d", num, num * num);
  }
  printf("\n Bye Bye");
  return 0;
}