// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>
/**
 * 打印三角形
 */

void printTriangle(int);

int main(void)
{
  int i;
  do
  {
    printf("Please input a positive integer: ");
    scanf("%i", &i);
  } while (!(i > 0));
  printTriangle(i);
  return 0;
}

void printTriangle(int n)
{
  char c = 'A';
  for (int i = 1; i <= n; i++, c++)
  {
    for (int j = 0; j < i; j++)
    {
      printf("%c", c);
    }
    printf("\n");
  }
}