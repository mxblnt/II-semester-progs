#include <stdio.h>
#include <stdlib.h>
#include <search.h>
#include <string.h>
#include <time.h>

void PrintArray(int * SomeArray, int ArraySize)
{
  int i;

  printf("A = [ ");
  for (i = 0; i < ArraySize; i++) printf("%d ", SomeArray[i]);
  printf("]\n");
}

int compare (const void * a, const void * b)
{
  return (*(int*)b - *(int*)a);
}

int main()
{
  int ArraySize, i;
  srand(time(0));

  printf("Enter array size: ");
  scanf("%d", &ArraySize);

  int * NewArray = (int*) malloc (ArraySize);

  for (i = 0; i < ArraySize; i++) NewArray[i] = rand() % 100;

  PrintArray(NewArray, ArraySize);
  qsort(NewArray, ArraySize, sizeof(int), compare);
  PrintArray(NewArray, ArraySize);

  return 0;
}
