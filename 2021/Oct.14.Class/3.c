// 输入一个1~9999的整数，输出其是几位数
// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>

#include <stdio.h>

int main(void)
{
  int i;
  do
  {
    printf("Input a integer(range from 1 to 9999): ");
    scanf("%i", &i);
  } while (!(i > 0 && i < 10000));

  printf("digit: %i\n",
         i < 10 ? 1 : (i < 100 ? 2 : (i < 1000 ? 3 : 4)));
}