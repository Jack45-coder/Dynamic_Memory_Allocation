/*
 11.MatrixMultiplicationUsingDynamicallyAllocated2DArrays
 Writeaprogramtodynamicallyallocatetwo2Darraysusingcallocformatrix
 multiplication.Takeinputforbothmatricesanddisplaytheresult.
 Input:-Enterdimensionsofthefirstmatrix(rowsandcolumns):23-Enterdimensionsofthesecondmatrix(rowsandcolumns):32-Enterelementsofthefirstmatrix:-
 1 2 3
 4 5 6-Enterelementsofthesecondmatrix:-
 7 8
 9 10
 11 12
 Output:-ResultantMatrix:-
 58  64
 139 154
*/

#include <stdio.h>
#include <stdlib.h>
void takeInputs(int **arr, int r, int c)
{
  // printf("Enter the elements:\n");
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
}

void multiplicationMatrix(int **arr, int **arr2, int r1, int c1, int c2, int **resultant)
{
  for (int i = 0; i < r1; i++)
  {
    for (int j = 0; j < c2; j++)
    {
      resultant[i][j] = 0; // Initialize resultant[i][j] to 0
      for (int k = 0; k < c1; k++)
      {
        resultant[i][j] += arr[i][k] * arr2[k][j]; // Multiplication
      }
    }
  }
}

void printMatrix(int **arr, int r, int c)
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
  int rows, cols, rows2, cols2;
  printf("Enter the number of rows & columns in first matrix:\n");
  scanf("%d %d", &rows, &cols);

  printf("Enter the number of rows & columns in second matrix:\n");
  scanf("%d %d", &rows2, &cols2);

  // Check if multiplication is possible
  if (cols != rows2)
  {
    printf("Matrix multiplication not possible!\n");
    return 0;
  }

  int **ptr = (int **)malloc(rows * sizeof(int));
  for (int i = 0; i < rows; i++)
  {
    ptr[i] = (int *)malloc(cols * sizeof(int));
  }

  int **ptr2 = (int **)malloc(rows2 * sizeof(int));
  for (int i = 0; i < rows2; i++)
  {
    ptr2[i] = (int *)malloc(cols2 * sizeof(int));
  }

  // create space for multiplication matrix
  int **result = (int **)malloc(rows * sizeof(int *));
  for (int i = 0; i < rows; i++)
  {
    result[i] = (int *)malloc(cols2 * sizeof(int));
  }

  printf("Enter the 1st matrix elements:\n");
  takeInputs(ptr, rows, cols); // Function to call take 1st mat inputs

  printf("Enter the 2nd matrix elements:\n");
  takeInputs(ptr2, rows2, cols2); // Function to call take 2nd mat inputs

  // Multiplication of matrix:
  multiplicationMatrix(ptr, ptr2, rows, cols, cols2, result);

  printf("Resultant matrix:\n");
  printMatrix(result, rows, cols2);

  // Free allocated memory
  for (int i = 0; i < rows; i++)
    free(ptr[i]);
  free(ptr);

  for (int i = 0; i < rows2; i++)
    free(ptr2[i]);
  free(ptr2);

  for (int i = 0; i < rows; i++)
    free(result[i]);
  free(result);

  return 0;
}