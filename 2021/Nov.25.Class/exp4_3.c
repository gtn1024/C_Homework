#include <stdio.h>

void inputMatrix(int n, int arr[n][n]);
void outputMatrix(int n, int arr[n][n]);
int getSum(int n, int arr[n][n]);

int main(void)
{
  int arr[5][5];
  inputMatrix(5, arr);
  outputMatrix(5, arr);
  printf("sum: %i\n", getSum(5, arr));
  return 0;
}

void inputMatrix(int n, int arr[n][n])
{
  printf("Please input the matrix: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%i", &arr[i][j]);
    }
  }
}

void outputMatrix(int n, int arr[n][n])
{
  printf("Matrix: \n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%i ", arr[i][j]);
    }
    printf("\n");
  }
}

int getSum(int n, int arr[n][n])
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i][i];
    sum += arr[i][n - 1 - i];
  }
  return sum;
}
