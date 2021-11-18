// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printArr(int n, int arr[n][n]);

int main(void)
{
  int n;
  do
  {
    printf("Input a positive integer: ");
    scanf("%i", &n);
  } while (n <= 0);

  // -------------------------------

  // [start] Generate matrix
  int arr[n][n];
  srand(time(NULL));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      arr[i][j] = rand() % 10 + 1;
    }
  }

  // [ end ] Generate matrix

  printf("Before: \n");
  printArr(n, arr);

  // -------------------------------

  // [start] Reverse matrix
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      int tmp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = tmp;
    }
  }
  // [ end ] Reverse matrix

  printf("After: \n");
  printArr(n, arr);

  return 0;
}

void printArr(int n, int arr[n][n])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%3i ", arr[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
