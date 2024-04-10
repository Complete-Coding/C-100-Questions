#include<stdio.h>
#include<string.h>

void input_book(char title[], char author[], float *price) {
  printf("\nPlease enter the book title: ");
  fgets(title, 100, stdin);
  title[strcspn(title, "\n")] = 0;
  printf("Now, enter the book's Author: ");
  fgets(author, 100, stdin);
  author[strcspn(author, "\n")] = 0;
  printf("Finally, enter the book's price in Rs: ");
  scanf("%f", price);
  while(getchar() != '\n');
}

void print_book(char title[], char author[], float price) {
  printf("\n%s is written by %s, and is sold for Rs%.2f",
  title, author, price);
}

int main() {
  printf("Welcome to the Book Store\n");
  char titles[3][100];
  char authors[3][100];
  float prices[3];

  for (int i = 0 ; i < 3; i++) {
    input_book(titles[i], authors[i], &prices[i]);
  }

  printf("\n\n Here are the details of all the books:\n");
  for(int i = 0 ; i < 3; i++) {
    print_book(titles[i], authors[i], prices[i]);
  }
  return 0;
}