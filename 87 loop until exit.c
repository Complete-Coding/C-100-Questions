#include<stdio.h>
#include<string.h>

int main() {
  const char EXIT[] = "exit";
  char command[20];
  printf("Welcome to our system\n\n");
  while (1) {
    printf("Please enter your command: ");
    scanf("%s", command);
    if (!strcmp(command, EXIT)) {
      break;
    }
  };

  printf("\n\nExited successfully");
  return 0;
}