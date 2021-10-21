// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  int n;
  printf("input an integer: ");
  scanf("%i", &n);

  int i = 0;
  int sum = 0;
  do
  {
    sum += i;
    ++i;
  } while (i <= n);

  printf("1 + 2 + .. + n = %i\n", sum);
  return 0;
}