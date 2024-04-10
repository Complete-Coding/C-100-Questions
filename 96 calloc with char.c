#include<stdio.h>
#include<stdlib.h>

int main() {
  printf("Welcome to our dyamic characters\n");
  char *sentense = (char*) calloc(100, sizeof(char));
  if (sentense == NULL) {
    printf("Memory Error !!!!");
    return 1;
  }

  printf("\nEnsuring all elements are initialized.\n");
  for (int i = 0; i < 100; i++) {
    printf(" %d", sentense[i]);
  }

  printf("\n Now enter a piece of text: ");
  fgets(sentense, 100, stdin);

  printf("\n Here is your text: %s", sentense);

  free(sentense);
  sentense = NULL;
  return 0;
}