#include<stdio.h>

int sum(int arr[], int size);

int main() {
  int arr[10];
  printf("Welcome to Sum and Average of Array\n");
  for (int i = 0; i < 10; i++) {
    printf("Please enter %dth element: ", (i + 1));
    scanf("%d", &arr[i]);
  }

  int addition = sum(arr, 10);
  float avg = addition / 10.0;
  printf("The sum of the numbers is %d and their average is %.2f", addition, avg);
  return 0;
}

int sum(int arr[], int size) {
  int addition = 0;
  for (int i = 0; i < size; i++) {
    addition += arr[i];
  }
  return addition;
}