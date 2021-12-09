#include <stdio.h>

int main(void) {
  int i, *p1, *p5, a = 10, array[6] = {1, 2, 3, 4, 5, 6};
  char c = 'a', *p2;
  float f = 0.01f, *p3;
  double d = 3.14, *p4;

  p1 = &a;
  p2 = &c;
  p3 = &f;
  p4 = &d;
  p5 = array;

  printf("int\ta\t%10p\t%3lu\t%5d\n", &a, sizeof(a), a);
  printf("pointer\tp1\t%10p\t%3lu\t%5d\t%10p\n\n", p1, sizeof(p1), *p1, &p1);
  printf("char\tc\t%10p\t%3lu\t%3c\n", &c, sizeof(c), c);
  printf("pointer\tp2\t%10p\t%3lu\t%3c\t%10p\n\n", p2, sizeof(p2), *p2, &p2);
  printf("float\tf\t%10p\t%3lu\t%6.2f\n", &f, sizeof(f), f);
  printf("pointer\tp3\t%10p\t%3lu\t%6.2f\t%10p\n\n", p3, sizeof(p3), *p3, &p3);
  printf("char\td\t%10p\t%3lu\t%6.2f\n", &d, sizeof(d), d);
  printf("pointer\tp4\t%10p\t%3lu\t%6.2f\t%10p\n\n", p4, sizeof(p4), *p4, &p4);
  printf("array\tarr\t%10p\t%3lu\n\n", array, sizeof(array));
  for (int i = 0; i < 6; i++) {
    printf("%d%10p", array[i], array + i);
    if (i != 5) {
      printf(",");
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}