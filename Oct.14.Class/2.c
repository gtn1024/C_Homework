// 输入一个三位的整数，将其倒序输出，如输入：“123” ，输出“321”
// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>

#include <stdio.h>

int main(void)
{
  int integer;
  do
  {
    printf("Please input a integer(range from 100 to 999): ");
    scanf("%i", &integer);
  } while (!(integer >= 100 && integer < 1000));

  int a = integer / 100;
  int b = (integer % 100) / 10;
  int c = ((integer % 100) % 10) / 1;
  printf("reverse result: %d%d%d\n", c, b, a);

  return 0;
}
