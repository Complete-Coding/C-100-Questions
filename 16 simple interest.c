#include<stdio.h>

int main() {
  float principal, rate, time;
  printf("Welcome to Simple Interest Calculator.\n");
  printf("Please enter the Principal: ");
  scanf("%f", &principal);
  printf("Now, enter the rate: ");
  scanf("%f", &rate);
  printf("Now, enter the time: ");
  scanf("%f", &time);

  float interest = (principal * rate * time) / 100;
  printf("\n Simple Interest is: %.2f", interest);
  return 0;
}