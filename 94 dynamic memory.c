#include<stdio.h>
#include<stdlib.h>

struct Car {
  char make[25];
  char model[25];
  int year;
  char color[15];
};

typedef struct Car Car;

void print_car(Car *car);

int main() {
  printf("Welcome to our Dynamic Island.\n");
  Car *my_car = (Car*) malloc(sizeof(Car)); // Memory allocation
  if (my_car == NULL) {
    printf("Memory was not allocated.!!!!");
    return 1;
  }

  printf("Please enter your car model: ");
  scanf("%s", my_car->model);
  printf("Now enter your car company: ");
  scanf("%s", my_car->make);
  printf("Now enter your car color: ");
  scanf("%s", my_car->color);
  printf("Finally enter your car year: ");
  scanf("%d", &my_car->year);

  printf("\n\n Here are your car details: ");
  print_car(my_car);
  free(my_car);  // Free
  my_car = NULL;
  return 0;
}

void print_car(Car *car) {
  printf("This %s model of car, which is of %s color, was purchsed in %d year, and is made by %s company\n", car->model, car->color, car->year, car->make);
}