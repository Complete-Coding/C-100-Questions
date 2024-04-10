#include <stdio.h>

struct Book
{
  char title[100];
  char author[100];
  float price;
};

typedef struct Book Book;

typedef struct
{
  char id[10];
  char name[50];
  char year[10];
  char grade;
  int no_of_books;
  Book borrowed_books[3];
} Student;

void print_student(Student *);
void print_book(Book *);

int main()
{
  Student stu1 = {
    .id = "CS001",
    .name = "Ravi",
    .year = "First", 
    .grade = 'B', 
    .no_of_books = 2, 
    .borrowed_books = {
      {.title = "The Selfish Gene", .author = "Richard Dawkins", .price = 499.99},
      {.title = "Why We sleep", .author = "Matthew Walker", .price = 399.99}
    }
  };

  printf("Welcome to our College\n");
  printf("Here are the student details:");
  print_student(&stu1);
  return 0;
}

void print_student(Student *stu)
{
  printf("\nThe student with %s name has id: %s and studies in %s year has achieved %c grade", stu->name, stu->id, stu->year, stu->grade);

  printf("\nHere are the books borrowed: ");
  for (int i = 0; i < stu->no_of_books; i++)
  {
    print_book(&(stu->borrowed_books[i]));
  }
}

void print_book(Book *book)
{
  printf("\n%s is written by %s, and is sold for Rs%.2f",
         book->title, book->author, book->price);
}