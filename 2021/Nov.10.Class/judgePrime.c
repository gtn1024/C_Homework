// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>

/*
 * 利用 judgePrime 函数验证哥德巴赫猜想之一：
 * 2000 以内的正偶数（>=4）都能够分解为两个质数只和。
 * 每个偶数表达成形如 4=2+2 的形式
 * 请以每行输出 4 个偶数及其分解结果
 */

#include <stdio.h>
#include <math.h>

/**
 * @brief 判断一个整数是否为质数
 * @param n 整数
 * @return 是否为质数
 */
int judgePrime(int);

int main(void)
{
  int flag = 0;
  for (int i = 4; i <= 2000; i += 2)
  {
    for (int j = 0; j < 2000; j++)
    {
      if (judgePrime(j) && judgePrime(i - j))
      {
        printf("%i=%i+%i\t", i, j, i - j);
        flag++;
        if (flag >= 4)
        {
          flag = 0;
          printf("\n");
        }
        break;
      }
    }
  }

  return 0;
}

int judgePrime(int n)
{
  int judge = 1;
  if (n == 1)
  {
    judge = 0;
  }
  int k = (int)sqrt(1.0 * n);
  for (int i = 2; judge && i <= k; i++)
  {
    if (n % i == 0)
    {
      judge = 0;
    }
  }
  return judge;
}