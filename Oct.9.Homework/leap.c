// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

int main(void)
{
  printf("`ctrl+c` to exit this program\n\n");
  while (1)
  {
    printf("Please input a year: ");
    int i;
    scanf("%i", &i);

    printf("isLeapYear: %s\n",
           ((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)
               ? "true"
               : "false");
  }
  return 0;
}
