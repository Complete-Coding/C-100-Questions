#include<stdio.h>

int main() {
  char day[10];
  char month[15];
  int year;

  printf("Welcome to formatting date\n\n");
  printf("Please enter the current day: ");
  scanf("%s", day);
  printf("Now, enter the current month: ");
  scanf("%s", month);
  printf("Finally, enter the current year: ");
  scanf("%d", &year);

  printf("\nThe current date is: %s/%s/%04d", day, month, year);
  return 0;
}