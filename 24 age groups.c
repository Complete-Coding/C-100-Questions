#include<stdio.h>

int main() {
  int age;
  printf("Welcome to Age group calculator\n");
  printf("Please enter your age: ");
  scanf("%d", &age);

  if (age < 13) {
    printf("You are a child");
  } else if (age < 20) {
    printf("You are a teen");
  } else if (age < 60) {
    printf("You are an Adult");
  } else {
    printf("You are a Senior");
  }

  return 0;
}