// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>
/**
 * 用辗转相除法求最大公约数
 */

int main(void)
{
  int a, b, c, d, flag = 0;
  printf("Please input 2 positive integer(a>b, split by space): ");
  do
  {
    scanf("%i %i", &a, &b);
  } while (!((a > 0 && b > 0) && a > b));

  // 辗转相除法
  while (!(a % b == 0))
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
  }

  printf("Largest common divisor: %i\n", flag ? b : 1);
  return 0;
}
