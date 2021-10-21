// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  printf("Please input an integer: ");
  int n;
  scanf("%i", &n);

  int i = 1;
  double s = 1;
  while (i <= n)
  {
    s *= i;
    ++i;
  }

  printf("%d! = %.0lf\n", n, s);

  return 0;
}