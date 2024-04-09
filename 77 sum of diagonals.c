#include<stdio.h>

const int SIZE = 3;
void print_diagonal_sum(int arr[][SIZE]);

int main() {
  printf("Welcome to Sum of diagonals in 2D array.\n");
  int arr1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int arr2[4][4] = {{8,7,6,5}, {1,2,3,4}, {5,8,3,5}, {0,1,8,-2}};

  print_diagonal_sum(arr1);
  return 0;
}

void print_diagonal_sum(int arr[][SIZE]) {
  int left_ds = 0;
  int right_ds = 0;
  for (int i = 0 ; i < SIZE; i++) {
    left_ds += arr[i][i];
    right_ds += arr[i][SIZE - 1 - i];
  }

  printf("\n The sum of left diagonal is %d", left_ds);
  printf("\n The sum of right diagonal is %d", right_ds);

  int total_ds = left_ds + right_ds;
  if (SIZE % 2 == 1) {
    int index = SIZE / 2;
    total_ds -= arr[index][index];
  }
  printf("\n The sum of total diagonal is %d", total_ds);
}