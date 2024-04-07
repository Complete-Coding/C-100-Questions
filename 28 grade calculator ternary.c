#include<stdio.h>

int main() {
  int marks;
  printf("Welcome to Grade calculator\n");
  printf("Please enter your marks: ");
  scanf("%d", &marks);

  printf("\nYour marks are in this category: ");;
  marks > 80 ? printf("High") 
             : (marks >= 50 ? printf("Moderate")
                            : printf("Low"));
  return 0;
}