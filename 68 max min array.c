#include<stdio.h>

int main() {
  int arr[10];
  printf("Welcome to Max and Min of Array\n");
  for (int i = 0; i < 10; i++) {
    printf("Please enter %dth element: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];
  for (int i = 1; i < 10; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  printf("The value of max is %d and min is %d", max, min);
  return 0;
}