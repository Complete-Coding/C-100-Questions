#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main() {
  char text[100];
  printf("Welcome to converting string to UPPERCASE\n\n");
  printf("Please enter your text: ");
  fgets(text, sizeof(text), stdin);

  // for (int i = 0; text[i] != '\0'; i++) {
  for (int i = 0; i < strlen(text); i++) {
    text[i] = toupper(text[i]);
  }

  printf("Here is your final output\n%s", text);
  return 0;
}