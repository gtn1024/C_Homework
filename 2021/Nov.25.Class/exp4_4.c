#include <stdio.h>

void inputMatrix(int n, int array[n][n]);
void outputMatrix(int n, int array[n][n]);
void reverseMatrix(int n, int array[n][n]);

int main(void)
{
  int array[3][3];
  printf("Input the matrix: \n");
  inputMatrix(3, array);
  printf("Matrix: \n");
  outputMatrix(3, array);
  printf("Reverse matrix: \n");
  reverseMatrix(3, array);
  outputMatrix(3, array);
  return 0;
}

void inputMatrix(int n, int array[n][n])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%i", &array[i][j]);
    }
  }
}

void outputMatrix(int n, int array[n][n])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%i ", array[i][j]);
    }
    printf("\n");
  }
}

void reverseMatrix(int n, int array[n][n])
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      int tmp = array[i][j];
      array[i][j] = array[j][i];
      array[j][i] = tmp;
    }
  }
}
