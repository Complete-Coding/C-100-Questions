#include<stdio.h>

int main() {
  int marks;
  printf("Welcome to Grade calculator\n");
  printf("Please enter your marks: ");
  scanf("%d", &marks);

  if (marks > 90) {
    printf("You have got A grade");
  } else if (marks > 75) {
    printf("You have got B grade");
  } else if (marks > 60) {
    printf("You have got C grade");
  } else if (marks > 30) {
    printf("You have got D grade");
  } else  {
    printf("You have failed the exam with F grade");
  }

  return 0;
}