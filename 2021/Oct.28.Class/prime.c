// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  int flag = 0;
  for (int i = 100; i < 1000; i++)
  {
    int isPrime = -1;
    for (int j = 2; j < i / 2 + 1; j++)
    {
      if (i % j == 0)
      {
        isPrime = 0;
      }
    }

    if (isPrime == -1)
    {
      isPrime = 1;
    }

    if (isPrime)
    {
      printf("%4d", i);
      flag++;
      if (flag == 8)
      {
        flag = 0;
        printf("\n");
      }
    }
  }
  return 0;
}
