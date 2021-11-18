// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>
#define N 50

int main(void)
{
  double fib[N] = {0, 1, 1};
  for (int i = 3; i <= N; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
  }
  for (int i = 1; i <= N; i++)
  {
    printf("%15.0lf", fib[i]);
    if (i % 5 == 0)
    {
      printf("\n");
    }
  }
  return 0;
}