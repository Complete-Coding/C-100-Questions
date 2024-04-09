#include<stdio.h>

int occurrences(int arr[], int size, int element);

int main() {
  int arr[] = {3, 6, 7, 98, 45, 3, 6, 3, 71, 10};
  printf("Welcome to finding element occurrences\n");

  int result = occurrences(arr, 10, 98);
  printf("\nThe number of occurrences of 98 are %d", result);
  result = occurrences(arr, 10, 6);
  printf("\nThe number of occurrences of 6 are %d", result);
  result = occurrences(arr, 10, 3);
  printf("\nThe number of occurrences of 3 are %d", result);
  result = occurrences(arr, 10, 100);
  printf("\nThe number of occurrences of 100 are %d", result);
  return 0;
}

int occurrences(int arr[], int size, int element) {
  int counter = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == element) {
      counter++;
    }
  }
  return counter;
}