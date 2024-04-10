#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
  printf("Welcome to the world of dynamic randoms\n");
  int *arr = (int*) calloc(10, sizeof(int));
  if (arr == NULL) {
    printf("Memory Error!!!");
    return 1;
  }

  srand(time(NULL)); // Seeding random generation with time
  for (int i = 0; i < 10; i++) {
    arr[i] = rand() % 100; // Random number with range 0-99
  }

  printf("\nHere are your random numbers: ");
  for (int i = 0; i < 10; i++) {
    printf(" %d", arr[i]);
  }

  int *shrinked = (int*) realloc(arr, 5 * sizeof(int));
  if (shrinked == NULL) {
    printf("Memory Error!!");
    free(arr);
    arr = NULL;
    return 1;
  }
  arr = shrinked;

  printf("\nHere are your random numbers: ");
  for (int i = 0; i < 5; i++) {
    printf(" %d", arr[i]);
  }

  free(arr);
  arr = NULL;
  return 0;
}