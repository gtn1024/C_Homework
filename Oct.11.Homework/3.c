/**
 * 编写程序，从键盘输入一个3位正整数，然后按数位的逆序输出该数
 * 如：123 -> 321
 * COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
 */

#include <stdio.h>

int main(void)
{

  // 法 1:
  /*
  printf("input a integer: ");
  char a, b, c;

  scanf("%c%c%c", &a, &b, &c);
  printf("%c%c%c", c, b, a);
  */

  // 法 2:
  int integer;
  do
  {
    printf("Please input a integer(range from 100 to 999): ");
    scanf("%i", &integer);
  } while ((integer < 100) || (integer > 999));

  int a = integer / 100;
  int b = (integer % 100) / 10;
  int c = ((integer % 100) % 10) / 1;
  printf("reverse result: %d%d%d\n", c, b, a);

  return 0;
}
