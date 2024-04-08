#include<stdio.h>

int main() {
  char character;
  char *ptr = &character;
  printf("Welcome to showcasing character pointers.\n");
  printf("Please enter the value: ");
  scanf(" %c", ptr);

  printf("\nThe value of char is: %c", *ptr);
  printf("\nThe value of char is: %c", character);
  return 0;
}