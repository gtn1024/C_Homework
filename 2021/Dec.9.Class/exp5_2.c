/*
  input: 1 3 2 4 5 7 6 8 0 9
 */

#include <stdio.h>

/**
 * Input data to array.
 * @param array array to operate.
 */
void inputArr(double array[10]);

/**
 * Output data of array.
 * @param array array to operate.
 */
void outputElementValAndAddr(double array[10]);

/**
 * Find the maximum and the minimum element and then calculate the average data.
 * @param array array to operate.
 */
void findMaxMinAverageOutput(double array[10]);

/**
 * Sort the array with SelectionSort.
 * @param array array to operate.
 */
void sortArray(double array[10]);

int main(void) {
  double array[10];
  inputArr(array);

  outputElementValAndAddr(array);
  findMaxMinAverageOutput(array);
  sortArray(array);
  outputElementValAndAddr(array);

  return 0;
}

void inputArr(double array[10]) {
  double *p = &array[0];

  for (int i = 0; i < 10; i++) {
    scanf("%lf", p++);
  }
}

void outputElementValAndAddr(double array[10]) {
  printf("------ outputElementValAndAddr ------\n");
  double *p = &array[0];

  printf("val\t\taddr\n");
  for (int i = 0; i < 10; i++) {
    printf("%lf\t%p\n", array[i], p + i);
  }
}

void findMaxMinAverageOutput(double array[10]) {
  printf("------ findMaxMinAverageOutput ------\n");
  double *p = &array[0];
  double max = -1;
  double min = 999;
  double sum = 0;

  for (int i = 0; i < 10; i++) {
    sum += *(p + i);
    if (*(p + i) > max) {
      max = *(p + i);
    }
    if (*(p + i) < min) {
      min = *(p + i);
    }
  }
  double ave = sum / 10;
  printf("Max: %lf\n", max);
  printf("Min: %lf\n", min);
  printf("Ave: %lf\n", ave);
}

void sortArray(double array[10]) {
  printf("------ sortArray ------\n");
  double *p = &array[0];

  for (int i = 0; i < 10; i++) {
    int min = i;
    for (int j = i + 1; j < 10; j++) {
      if (*(p + j) < *(p + min)) {
        min = j;
      }
    }
    if (i != min) {
      int tmp = *(p + i);
      *(p + i) = *(p + min);
      *(p + min) = tmp;
    }
  }
}
