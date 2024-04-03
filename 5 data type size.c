#include <stdio.h>

int main() {
  int integer;
  float decimal;
  double doub;
  char character;

  printf("\nThe size of int is %lu bytes", sizeof(integer));
  printf("\nThe size of float is %lu bytes", sizeof(decimal));
  printf("\nThe size of double is %lu bytes", sizeof(doub));
  printf("\nThe size of char is %lu bytes", sizeof(character));
}