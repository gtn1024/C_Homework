/*
  编写程序，从键盘输入一个圆柱体的底面半径r和高h，
  计算并输出该圆柱体的体积和表面积
  （要求结果精确到小数点后3位）
*/

// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>
#define PI 3.14159

int main(void)
{
  double r; // 半径
  double h; // 高

  printf("请输入半径与高，空格分隔：");
  scanf("%lf%lf", &r, &h);

  double volume; // 体积
  double area;   // 面积

  volume = PI * r * r * h;
  area = 2 * PI * r * r + 2 * PI * r * h;

  printf("体积：%.3f\n", volume);
  printf("面积：%.3f\n", area);

  return 0;
}
