// 输入圆的半径，输出面积和周长，要求输出保留2位小数。
// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>

#include <stdio.h>

int main(void)
{
  const double PI = 3.141592653;

  double r; // 半径
  printf("Input the radius: ");
  scanf("%lf", &r);

  double s, p; // 面积、周长
  s = PI * r * r;
  p = 2 * PI * r;

  printf("area: %.2lf, perimeter: %.2lf\n", s, p);
  return 0;
}