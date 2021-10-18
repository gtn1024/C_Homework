/*
  输入4位（1000~9999）年份，对年份是闰年，平年判断，结果输出。
  考虑：录入非法的情况。
  流程图。。。。
*/

// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  // printf("Press `Ctrl + C` to exit this program\n\n");
  // while (1)
  // {
  printf("Please input a year(range from 1000 to 9999): ");
  int i;
  scanf("%i", &i);

  if (i < 1000 || i >= 10000)
  {
    printf("Illegal input! Please make sure the range if from 1000 to 9999!\n");
    // continue;  // 退出 while 循环，但因目前没学到，所以注释
  }
  else
  {
    if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) // 从代码复用的角度来讲，这里应该抽离成一个函数
    {
      printf("Oh, yeah! %d is the leap year!\n", i);
    }
    else
    {
      printf("No, %d is not the leap year.\n", i);
    }
  }
  // }
  return 0;
}
