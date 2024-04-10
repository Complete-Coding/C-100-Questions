#include<stdio.h>
#include<string.h>

struct Book {
  char title[100];
  char author[100];
  float price;
};

typedef struct Book Book;

void print_book(Book *book) {
  printf("\n%s is written by %s, and is sold for Rs%.2f",
  book->title, book->author, book->price);
}

int main() {
  printf("Welcome to the Book Store\n");
  Book books[3] = {
    {.title = "The Selfish Gene", .author = "Richard Dawkins", .price = 499.99},
    {.title = "Why We sleep", .author = "Matthew Walker", .price = 399.99},
    {"Doglapan", "Ashneer Grover", 299.99} // Not designated initializer
  };

  printf("Here are the details of all the books:\n");
  for(int i = 0 ; i < 3; i++) {
    print_book(&books[i]);
  }
  return 0;
}