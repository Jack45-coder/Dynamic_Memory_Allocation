/*
 1. Create a 1D Array Using malloc and Initialize
 Write a program that dynamically allocates a 1D array using malloc and initializes
 all elements , then displays the array.
 Input:- Enterthe number of elements: 3
 Output:- Arraycontents : 3 , 2 , 5
*/

#include <stdio.h>
#include <stdlib.h>
void takeinputs(int *arr, int n)
{
  printf("Enter %d elements:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", (arr + i));
  }
}

void printArr(int *arr, int n)
{
  printf("Elements Here: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", (*arr + i));
  }
}

int main()
{
  int n;
  printf("Enter the size of array: ");
  scanf("%d", &n);
  int *ptr = (int *)calloc(n, sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory allocation faild!");
    return 1;
  }
  takeinputs(ptr,n);
  printArr(ptr,n);

  free(ptr);
  return 0;
}