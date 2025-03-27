/*
13.ReallocateColumnsina2DArray
 Writeaprogramtodynamicallyallocatea2Darrayusingcalloc,takeinput,anduse
 realloctoaddmorecolumns. Initializethenewcolumnswith0.
 Input:-Entertheinitialnumberofrowsandcolumns:22
 -Entertheelements:-
 1 2
 3 4
 -Resizethematrixto 4 columns.
 Output:-UpdatedMatrix
 -1 2 0 0
  3 4 0 0
*/

#include <stdio.h>
#include <stdlib.h>
void takeinputs(int **arr, int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}

void printArray(int **arr, int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int r, c, nc;
  printf("ENter the no of rows & columns:\n");
  scanf("%d %d", &r, &c);

  int **ptr = (int **)calloc(r, sizeof(int *));
  for (int i = 0; i < r; i++)
  {
    ptr[i] = (int *)calloc(c, sizeof(int));
  }
  printf("Enter the elements:\n");
  takeinputs(ptr, r, c);

  printf("Original MAtrix:\n");
  printArray(ptr, r, c);

  printf("Enter the number of increase columns: ");
  scanf("%d", &nc);

  // Increase column size
  for (int i = 0; i < r; i++)
  {
    ptr[i] = (int *)realloc(ptr[i], nc * sizeof(int));
    // Initialize new columns to 0
    for (int j = c; j < nc; j++)
    {
      ptr[i][j] = 0;
    }
  }
  printf("Updated matrix:\n");
  printArray(ptr, r, nc);
  for (int i = 0; i < nc; i++)
    free(ptr[i]);
  free(ptr);
  return 0;
}