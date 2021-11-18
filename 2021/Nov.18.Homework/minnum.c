// COPYRIGHT: <a href="https://github.com/gtn1024">gtn1024</a>
#include <stdio.h>

/**
 * @param arr 整数数组
 * @param size 数组长度
 * @return int 最小的数
 */
int minnum(int arr[], int size);

int main(void)
{
  int n;
  do
  {
    printf("Input a positive integer: ");
    scanf("%i", &n);
  } while (n <= 0);
  int arr[n];
  printf("Input your data: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%i", &arr[i]);
  }
  printf("The minium integer is %i\n", minnum(arr, sizeof(arr) / sizeof(int)));
  return 0;
}

int minnum(int arr[], int size)
{
  int min = arr[0];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}