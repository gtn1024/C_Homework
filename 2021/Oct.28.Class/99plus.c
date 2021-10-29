// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  for (int i = 1; i <= 9; i++)
  {
    // print spaces
    for (int j = 1; j < i; j++)
    {
      // print one space
      for (int k = 0; k < 7; k++)
      {
        printf(" ");
      }
    }
    for (int j = 9, k = i; j >= i; j--, k++)
    {
      printf("%i+%i=%2i ", i, k, i + k);
    }
    printf("\n");
  }
  return 0;
}
