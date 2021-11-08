// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

/**
 * @brief 进制转换
 * 
 * @param n 要转换的数字
 * @param s 进制数
 */
void convert(int, int);

int main(void)
{
  int i;
  do
  {
    printf("Please input a positive decimal integer: ");
    scanf("%i", &i);
  } while (!(i > 0));

  printf("Bin: ");
  convert(i, 2);
  printf("\n");

  printf("Oct: ");
  convert(i, 8);
  printf("\n");

  printf("Hex: ");
  convert(i, 16);
  printf("\n");

  return 0;
}

void convert(int n, int s)
{
  int i, j;
  if (n == 0)
  {
    return;
  }
  else
  {
    i = n % s;
    j = n / s;
    convert(j, s);
    if (i >= 10)
    {
      printf("%c", i + 55);
    }
    else
    {
      printf("%i", i);
    }
  }
}