// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

void printSpace();

int main(void)
{
  int i, j, k;
  for (i = 1; i <= 9; i++)
  {
    // print space
    for (j = 1; j < i; j++)
    {
      printSpace();
    }
    for (j = 9, k = i; j >= i; j--, k++)
    {
      printf("%i+%i=%2i ", i, k, i + k);
    }
    printf("\n");
  }
  return 0;
}

void printSpace()
{
  for (int i = 0; i < 7; i++)
  {
    printf(" ");
  }
}