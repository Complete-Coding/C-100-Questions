#include<stdio.h>

int main() {
  const float MILE_PER_KM = 0.621371;
  long kms;
  printf("Welcome to Distance converter.\n");
  printf("Please enter the kms: ");
  scanf("%ld", &kms);

  long miles = kms * MILE_PER_KM;
  printf("The number of miles are %ld", miles);
  return 0;
}