#include<stdio.h>
#include<string.h>

struct Book {
  char title[100];
  char author[100];
  float price;
};

typedef struct Book Book;

void input_book(Book *book) {
  printf("\nPlease enter the book title: ");
  fgets(book->title, 100, stdin);
  book->title[strcspn(book->title, "\n")] = 0;
  printf("Now, enter the book's Author: ");
  fgets(book->author, 100, stdin);
  book->author[strcspn(book->author, "\n")] = 0;
  printf("Finally, enter the book's price in Rs: ");
  scanf("%f", &(book->price));
  while(getchar() != '\n');
}

void print_book(Book *book) {
  printf("\n%s is written by %s, and is sold for Rs%.2f",
  book->title, book->author, book->price);
}

int main() {
  printf("Welcome to the Book Store\n");
  Book books[3];

  for (int i = 0 ; i < 3; i++) {
    input_book(&books[i]);
  }

  printf("\n\n Here are the details of all the books:\n");
  for(int i = 0 ; i < 3; i++) {
    print_book(&books[i]);
  }
  return 0;
}