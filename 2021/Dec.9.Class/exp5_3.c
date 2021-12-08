/*
input:

Java
Python
Kotlin
Groovy
Scala
Swift
JavaScript
TypeScript
C#
C++
 */
#include <stdio.h>
#include <string.h>

void inputStr(char array[10][100]);
void outputStr(char array[10][100]);
void sortStr(char array[10][100]);

int main(void) {
  char array[10][100];

  inputStr(array);
  outputStr(array);
  sortStr(array);
  outputStr(array);

  return 0;
}

void inputStr(char array[10][100]) {
  for (int i = 0; i < 10; i++) {
    scanf("%s", array[i]);
  }
}

void outputStr(char array[10][100]) {
  printf("------ outputStr ------\n");
  for (int i = 0; i < 10; i++) {
    printf("%s\n", array[i]);
  }
}

void sortStr(char array[10][100]) {
  printf("------ sortStr ------\n");

  for (int i = 0; i < 10; i++) {
    int min = i;
    for (int j = i + 1; j < 10; j++) {
      if (strcmp(array[j], array[min]) < 0) {
        min = j;
      }
    }
    if (i != min) {
      char tmp[100];
      strcpy(tmp, array[i]);
      strcpy(array[i], array[min]);
      strcpy(array[min], tmp);
    }
  }
}