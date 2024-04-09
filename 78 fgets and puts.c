#include<stdio.h>

int main() {
  char name[25];
  printf("Welcome to showing use of fgets and puts\n");
  printf("Please, enter your full name: ");
  fgets(name, sizeof(name), stdin);

  printf("The name you entered is: ");
  puts(name);
  return 0;
}