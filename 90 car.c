#include<stdio.h>

struct Car {
  char make[25];
  char model[25];
  int year;
  char color[15];
};

typedef struct Car Car;

void print_car(Car *car);

int main() {
  Car ford = {.make = "Ford", .model="Aspire", .year=2016, .color="Red"};
  return 0;
}
