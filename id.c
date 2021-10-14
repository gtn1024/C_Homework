/*
  公民身份证号码是一种由18位数字组成的特征组合码，其排列顺序从左至右依次为：
  6位数字地址码、8位数字出生日期码、3位数字顺序码和一位数字校验码（校验码若为10则用字符‘X’表示）
  编写程序，从键盘输入一个身份证号码，由程序输出该号码的各组成信息

  45222319950814004X
*/

// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  printf("请输入18位身份证：");
  char s[19];
  scanf("%s", s);

  printf("地址码：%c%c%c%c%c%c\n",
         s[0], s[1], s[2], s[3], s[4], s[5]);
  printf("出生日期：%c%c%c%c年%c%c月%c%c日\n",
         s[6], s[7], s[8], s[9],
         s[10] == '0' ? '\0' : s[10],
         s[11], s[12], s[13]);
  printf("顺序码：%c%c%c\n", s[14], s[15], s[16]);
  printf("校验码：%c\n", s[17]);
  return 0;
}
