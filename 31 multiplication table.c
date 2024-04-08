#include<stdio.h>

int main() {
  int num;
  printf("Welcome to printing tables\n");
  printf("Please enter the number: ");
  scanf("%d", &num);

  int i = 1;
  while (i <= 10) {
    printf("\n%d X %d = %d", num, i, num * i);
    i++;
  }

  return 0;
}