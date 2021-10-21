// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  int x;
  do
  {
    printf("Input an integer(range from 0 to 100): ");
    scanf("%i", &x);
  } while (!(x >= 0 && x <= 100));

  char result;

  if (x >= 90)
  {
    result = 'A';
  }
  else if (x >= 80)
  {
    result = 'B';
  }
  else if (x >= 70)
  {
    result = 'C';
  }
  else if (x >= 60)
  {
    result = 'D';
  }
  else
  {
    result = 'E';
  }
  printf("Result: %c\n", result);
  return 0;
}