#include <stdio.h>
#include <math.h>

void printArr(double arr[], int size);
double arrAverage(double arr[], int size);
double getMaxElement(double arr[], int size);
int findElement(double arr[], int size, double element);
void sortArr(double arr[], int size);

int main(void)
{
  double array[10];
  printf("input 10 elements: ");
  for (int i = 0; i < 10; i++)
  {
    scanf("%lf", &array[i]);
  }
  printArr(array, sizeof(array) / sizeof(double));
  printf("Array average: %.2lf\n", arrAverage(array, sizeof(array) / sizeof(double)));
  printf("Max element: %.2lf\n", getMaxElement(array, sizeof(array) / sizeof(double)));
  double num;
  printf("Input a number to find: ");
  scanf("%lf", &num);
  printf("is %.2lf found: %s\n", num, findElement(array, sizeof(array) / sizeof(double), num) ? "true" : "false");
  sortArr(array, sizeof(array) / sizeof(double));
  printf("Sorted Array: \n");
  printArr(array, sizeof(array) / sizeof(double));
  return 0;
}

void printArr(double arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%.2lf ", arr[i]);
  }
  printf("\n");
}

double arrAverage(double arr[], int size)
{
  double sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum / size;
}

double getMaxElement(double arr[], int size)
{
  double max = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

int findElement(double arr[], int size, double element)
{
  for (int i = 0; i < size; i++)
  {
    if (fabs(arr[i] - element) <= 1e-6)
    {
      return 1;
    }
  }
  return 0;
}

void sortArr(double arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int min = i;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    if (i != min)
    {
      int tmp = arr[i];
      arr[i] = arr[min];
      arr[min] = tmp;
    }
  }
}
