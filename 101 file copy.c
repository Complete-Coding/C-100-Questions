#include<stdio.h>

int main() {
  printf("Welcome to File copying\n");
  FILE *source_file = fopen("kgcoding.txt", "r");
  FILE *dest_file = fopen("copy.txt", "w");

  if (source_file == NULL || dest_file == NULL) {
    printf("Error while opening file.");
    return 1;
  }

  // Infinte loop
  while (1) {
    char c = fgetc(source_file);
    if (c == EOF) break;
    fputc(c, dest_file);
    printf(".");
  }

  fclose(source_file);
  fclose(dest_file);
  dest_file = source_file = NULL;
  return 0;
}