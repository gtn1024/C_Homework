#include <stdio.h>

void swap1(int, int);
void swap2(int *, int);
void swap3(int *, int *);
void swap4(int *, int *);

int main() {
  int base1, base2;
  printf("Input 2 integers: ");
  scanf("%i%i", &base1, &base2);

  int x, y;

  x = base1;
  y = base2;
  swap1(x, y);
  printf("%i %i\n\n", x, y);

  x = base1;
  y = base2;
  swap2(&x, y);
  printf("%i %i\n\n", x, y);

  x = base1;
  y = base2;
  swap3(&x, &y);
  printf("%i %i\n\n", x, y);

  x = base1;
  y = base2;
  swap4(&x, &y);
  printf("%i %i\n\n", x, y);

  return 0;
}

void swap1(int a, int b) {
  printf("----- swap1 -----\n");
  int temp = a;
  a = b;
  b = temp;
}

void swap2(int *a, int b) {
  printf("----- swap2 -----\n");
  int temp = *a;
  *a = b;
  b = temp;
}

void swap3(int *a, int *b) {
  printf("----- swap3 -----\n");
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swap4(int *a, int *b) {
  printf("----- swap4 -----\n");
  int *temp = a;
  a = b;
  b = temp;
}
