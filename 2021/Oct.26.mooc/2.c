#include <stdio.h>

int isPrime(int);

int main(void)
{
  int flag = 0;
  for (int i = 101; i < 1000; i++)
  {
    if (isPrime(i))
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

int isPrime(int i)
{
  int flag = 0;
  for (int j = 2; j < i / 2 + 1; j++)
  {
    if (i % j == 0)
    {
      return 0;
    }
  }
  return 1;
}