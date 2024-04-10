#include<stdio.h>
#include<stdlib.h>

typedef struct {
  int x;
  int y;
} Point;

void input_point(Point*);
void show_point(Point*);

int main() {
  printf("Welcome to dynamic points\n");
  Point *start = (Point*) malloc(sizeof(Point));
  Point *end = (Point*) malloc(sizeof(Point));
  if (start == NULL || end == NULL) {
    printf("Memory Issues !!!!");
    return 1;
  }

  printf("\nPlease enter the details for starting point of your line: ");
  input_point(start);
  printf("\nNow enter the details for ending point of your line: ");
  input_point(end);

  printf("Now here are your details:");
  show_point(start);
  show_point(end);

  free(start);
  free(end);
  start = end = NULL;
  return 0;
}

void input_point(Point *point) {
  printf("\nEnter x coordinate: ");
  scanf("%d", &point->x);
  printf("Enter y coordinate: ");
  scanf("%d", &point->y);
}

void show_point(Point *point) {
  printf("\nCoordinates(%d, %d)", point->x, point->y);
}