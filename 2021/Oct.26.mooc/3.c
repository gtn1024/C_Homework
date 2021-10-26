// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  for (int i = 0; i < 5; i++)
  {
    // print space
    for (int j = 0; j < i; j++)
    {
      printf(" ");
    }
    // print star
    for (int j = 0; j < 9 - 2 * i; j++)
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}