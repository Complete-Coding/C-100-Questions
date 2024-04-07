#include<stdio.h>

int main() {
  int a, b, c ,d;
  printf("Please enter the first side: ");
  scanf("%d", &a);
  printf("Now, enter the second side: ");
  scanf("%d", &b);
  printf("Now, enter the third side: ");
  scanf("%d", &c);
  printf("Now, enter the fourth side: ");
  scanf("%d", &d);

  int perimeter = a + b + c + d;
  printf("\n Perimeter of your shape is: %d", perimeter);
  return 0;
}