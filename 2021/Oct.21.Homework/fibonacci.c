// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  int n = 10;

  printf("Fibonacci: ");

  int a = 1, b = 1, tmp;
  for (int i = 0; i < n; i++)
  {
    printf("%i ", a);
    tmp = a + b;
    a = b;
    b = tmp;
  }
  printf("\n");
  return 0;
}
