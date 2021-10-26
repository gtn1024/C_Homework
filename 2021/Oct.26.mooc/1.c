#include <stdio.h>
#include <math.h>

int factorial(int);

int main(void)
{
  double m, s = 0.0;
  scanf("%lf", &m);
  int i = 1;
  double item = 0.0;
  int flag = 1;
  do
  {
    item = flag * pow(m, i) / factorial(i);
    s += item;
    flag = -flag;
    i++;
  } while (!(fabs(item) < 1e-4));

  printf("%.2lf\n", s);
  return 0;
}

int factorial(int i)
{
  int s = 1;
  for (int j = 1; j <= i; j++)
  {
    s *= j;
  }
  return s;
}