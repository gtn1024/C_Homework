#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printMap(int arr[], int);

int main(void)
{
  srand(time(NULL));
  int count[10001] = {0};
  for (int i = 0; i < 1000; i++)
  {
    count[rand() % 10000]++;
  }
  printMap(count, sizeof(count) / sizeof(int));
  return 0;
}

void printMap(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      printf("(%i, %i)\n", i, arr[i]);
    }
  }
}
