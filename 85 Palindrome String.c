#include<stdio.h>
#include<string.h>

int is_palindrome(char arr[]);

int main() {
  char text[20];
  printf("Welcome to Palindrome string checker\n");
  printf("Now enter your string: ");
  scanf("%s", text);

  if (is_palindrome(text)) {
    puts("Your input is palindrome");
  } else {
    puts("Your input is not palindrome");
  }
  return 0;
}

int is_palindrome(char arr[]) {
  int len = strlen(arr);
  for (int i = 0 ; i < len / 2; i++) {
    if (arr[i] != arr[len - 1 - i]) {
      return 0;
    }
  }
  return 1;
}