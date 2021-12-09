#include <stdio.h>

void swap1(int, int);
void swap2(int *, int);
void swap3(int *, int *);
void swap4(int *, int *);

int main() {
  int x, y;
  printf("Input 2 integers: ");
  scanf("%i%i", &x, &y);

  // swap1(x, y);
  // printf("%i %i\n", x, y);

  // swap2(&x, y);
  // printf("%i %i\n", x, y);

  swap3(&x, &y);
  printf("%i %i\n", x, y);

  // swap4(&x, &y);
  // printf("%i %i\n", x, y);

  return 0;
}

void swap1(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
}

void swap2(int *a, int b) {
  int temp = *a;
  *a = b;
  b = temp;
}

void swap3(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swap4(int *a, int *b) {
  int *temp = a;
  a = b;
  b = temp;
}
