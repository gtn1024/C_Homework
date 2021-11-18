// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>
#define N 30

int main(void)
{
  int fib[N] = {0, 1, 1};
  for (int i = 3; i <= N; i++)
  {
    fib[i] = fib[i - 1] + fib[i - 2];
    if (fib[i] >= 1000)
    {
      printf("After %i monthes, the amount of rabbit will be more than 1,000\n", i);
      printf("The amount is %i\n", fib[i]);
      break;
    }
  }
  return 0;
}