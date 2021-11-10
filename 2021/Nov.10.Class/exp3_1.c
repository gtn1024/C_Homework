// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>

/*
 * 先定义一个函数，其原型为：void drawPic(int n,char c);
 * 功能为：
 * 
 * 打印一个n行的由字符c组成的等腰三角形（方法可参考主教材例4.10）。
 * 主函数中给出3次调用，
 * 分别打印出由7行’*’、11行’@’、20行’$’组成的等腰三角形。
 * 尽量使图形居中打印。
 * 通过修改与n对应的实参值，
 * 观察n最大值可以取到多少，
 * 再超过将无法正确输出等腰三角形。
 */

#include <stdio.h>

/**
 * @brief 打印n行由c组成的等腰三角形
 * 
 * @param n 几行
 * @param c 输出的字符
 */
void drawPic(int n, char c);

int main(void)
{
  drawPic(7, '*');
  drawPic(11, '@');
  drawPic(20, '$');
  return 0;
}

void drawPic(int n, char c)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      printf(" ");
    }
    for (int j = 0; j < 2 * i - 1; j++)
    {
      printf("%c", c);
    }
    printf("\n");
  }
}