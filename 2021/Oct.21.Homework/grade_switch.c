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

  switch (x / 10)
  {
  case 10:
  case 9:
    result = 'A';
    break;
  case 8:
    result = 'B';
    break;
  case 7:
    result = 'C';
    break;
  case 6:
    result = 'D';
    break;
  default:
    result = 'E';
    break;
  }

  printf("Result: %c\n", result);
  return 0;
}