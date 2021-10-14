// 编写程序，从键盘任意输入4个整数，要求输出其中的最大值和最小值。（条件运算符）
// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>

#include <stdio.h>

int main(void)
{
  int a, b, c, d;
  int ab, xc, xd; // ab: ab中大/小的，xc: abc中大/小的，xd: 最大/小的
  printf("Please input 4 integers(split by space): ");
  scanf("%i %i %i %i", &a, &b, &c, &d);

  ab = a > b ? a : b;
  xc = ab > c ? ab : c;
  xd = xc > d ? xc : d;
  printf("max: %i\n", xd);

  ab = a < b ? a : b;
  xc = ab < c ? ab : c;
  xd = xc < d ? xc : d;
  printf("min: %i\n", xd);

  return 0;
}
