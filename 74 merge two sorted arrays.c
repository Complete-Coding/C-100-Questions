#include<stdio.h>

void print_arr(int arr[], int size);
void merge_sorted_arrays(int arr1[], int size1,
                         int arr2[], int size2,
                         int arr3[], int size3);

int main() {
  int arr1[5] = {1, 3, 5, 7, 9};
  int arr2[7] = {2, 4, 6, 8, 10, 12, 14};
  int arr3[12];

  printf("Welcome to merging sorted arrays");
  printf("\n\nHere is the merged array:");
  merge_sorted_arrays(arr1, 5, arr2, 7, arr3, 12);
  print_arr(arr3, 12);


  int arr4[5] = {4, 9, 16, 67, 5434};
  int arr5[5] = {-43, -21, 0, 1, 2};
  int arr6[10];

  printf("Welcome to merging sorted arrays");
  printf("\n\nHere is the merged array:");
  merge_sorted_arrays(arr4, 5, arr5, 5, arr6, 10);
  print_arr(arr6, 10);
  return 0;
}

void print_arr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf(" %d", arr[i]);
  }
}

void merge_sorted_arrays(int arr1[], int size1,
                         int arr2[], int size2,
                         int arr3[], int size3) {
  int i = 0, j = 0, k = 0;
  while (k < size3) {
    if (j == size2 || (i < size1 && arr1[i] < arr2[j])) {
      arr3[k] = arr1[i++];
    } else {
      arr3[k] = arr2[j++];
    }

    // if (j == size2) {
    //   arr3[k] = arr1[i++];
    // } else if (i == size1) {
    //   arr3[k] = arr2[j++];
    // } else if (arr1[i] < arr2[j]) {
    //   arr3[k] = arr1[i++];
    // } else {
    //   arr3[k] = arr2[j++];
    // }

    k++;
  }
}