// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>
/**
 * 求最大公约数
 */

int getLargestCommonDivisor(int, int);

int main(void)
{
  printf("Press `Ctrl + C` to exit!\n\n");
  int a, b;
  while (1)
  {
    do
    {
      printf("Please input 2 positive integer(split by space): ");
      scanf("%i %i", &a, &b);

    } while (!(a > 0 && b > 0));
    printf("The largest common divisor of %i and %i is %i\n\n",
           a, b, getLargestCommonDivisor(a, b));
  }

  return 0;
}

int getLargestCommonDivisor(int a, int b)
{
  int c, d, flag = 0;
  // switch a and b if a < b
  if (a < b)
  {
    int tmp = a;
    a = b;
    b = tmp;
  }
  do
  {
    c = a / b;
    d = a % b;
    a = b;
    b = d;
    if (a % b == 0)
    {
      flag = 1;
      break;
    }
  } while (!(a % b == 0));
  return flag ? b : 1;
}