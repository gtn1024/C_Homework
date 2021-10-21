// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int f(int);

int main(void)
{
  int n = 10;
  printf("Fibonacci: ");
  for (int i = 1; i <= n; i++)
  {
    printf("%i ", f(i));
  }
  printf("\n");
  return 0;
}

int f(int i)
{
  if (i == 1 || i == 2)
  {
    return 1;
  }
  else
  {
    return f(i - 1) + f(i - 2);
  }
}
