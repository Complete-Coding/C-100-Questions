#include<stdio.h>

int main() {
  char filename[100];
  printf("Welcome to File opening tool\n");
  printf("Please enter the file name: ");
  scanf("%99s", filename);

  FILE *file = fopen(filename, "r");
  if (file != NULL) {
    printf("\n%s was opened successfully", filename);
    fclose(file);
  } else {
    printf("\nFile was not found.");
  }

  return 0;
}