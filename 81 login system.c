#include<stdio.h>
#include<string.h>

int main() {
  const char STORED_PASSWORD[] = "KGCodingSecret";
  char password[50];
  printf("Welcome to Secure System.\n\n");
  printf("Please enter your password: ");
  scanf("%s", password);
  //fgets(password, sizeof(password), stdin);

  if (strcmp(password, STORED_PASSWORD) == 0) {
    puts("Access Granted to the System.");
  } else {
    puts("Access Denied to the System.");
  }
  return 0;
}