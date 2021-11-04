// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>
/**
 * 打印倒三角
 */
void print(int);

int main(void)
{
  int n;
  do
  {
    printf("Please enter a positive integer: ");
    scanf("%i", &n);
  } while (n < 0);
  print(n);
  return 0;
}

void print(int n)
{
  for (int i = 0; i < n; i++)
  {
    // print space
    for (int j = 0; j < i; j++)
    {
      printf(" ");
    }
    // print *
    for (int j = 0; j < 2 * (n - i) - 1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}