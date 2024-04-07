#include<stdio.h>
#include<math.h>

int main() {
  float principal, rate, time;
  printf("Welcome to Compound Interest Calculator.\n");
  printf("Please enter the Principal: ");
  scanf("%f", &principal);
  printf("Now, enter the rate: ");
  scanf("%f", &rate);
  printf("Now, enter the time: ");
  scanf("%f", &time);

  float interest = principal * pow((1 + rate / 100), time);
  printf("\n Compound Interest is: %.2f", interest);
  return 0;
}